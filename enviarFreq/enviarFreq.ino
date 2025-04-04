#include <IRremote.h>

const int irLedPin = 2;  // pino do LED IR
IRsend irsend;


void mostrarMenu() {
  Serial.println(F("\n--- MENU ---"));
  Serial.println(F("1 - Ar-condicionado: Ligar/Desligar"));
  Serial.println(F("2 - Ar-condicionado: Aumentar temperatura"));
  Serial.println(F("3 - Ar-condicionado: Diminuir temperatura"));
  Serial.println(F("4 - TV: Ligar/Desligar"));
  Serial.println(F("5 - TV: Aumentar volume"));
  Serial.println(F("6 - TV: Diminuir volume"));
  Serial.println(F("m - Mostrar menu novamente"));
}

// --- Códigos IR capturados ---
uint16_t ar_ligar_desligar[110] = {
  6550,3400, 350,500, 350,1300, 350,450, 350,1300,
  350,500, 350,1300, 350,500, 350,1250, 400,1250, 400,450,
  400,450, 350,450, 400,1250, 400,450, 400,400, 400,450,
  400,1250, 400,450, 350,450, 400,1250, 400,450, 350,450,
  400,450, 350,500, 350,450, 350,1300, 350,500, 350,1300,
  350,450, 350,500, 350,450, 400,1250, 400,450, 350,450,
  350,500, 350,450, 350,500, 350,500, 300,500, 300,550,
  300,500, 350,500, 300,1350, 300,500, 350,500, 300,550,
  300,500, 350,1300, 350,500, 300,550, 300,550, 250,600,
  200,650, 200
};

uint16_t ar_temp_mais[148] = {
  6550,3350, 350,500, 350,1300, 350,450, 400,1300,
  350,450, 400,1300, 300,500, 350,1300, 400,1250, 400,400,
  400,400, 400,450, 400,1300, 350,450, 350,450, 400,450,
  400,1250, 350,450, 400,450, 400,1300, 300,500, 350,450,
  400,450, 400,400, 400,1300, 350,1300, 350,450, 400,1300,
  350,400, 400,450, 400,400, 400,1300, 400,400, 400,450,
  400,400, 400,450, 400,400, 400,450, 400,450, 350,450,
  400,450, 350,450, 400,1300, 350,450, 400,400, 400,450,
  400,450, 350,1300, 350,450, 400,450, 400,400, 400,450,
  400,400, 400,450, 400,400, 400,450, 350,450, 400,450,
  400,400, 400,450, 400,400, 400,450, 400,450, 350,450,
  400,1300, 300,500, 400,400, 400,1300, 350,1300, 350,1300,
  350,1300, 350,450, 400
};

uint16_t ar_temp_menos[148] = {
  6600,3300, 400,450, 400,1250, 400,450, 350,1300,
  350,500, 350,1300, 350,450, 400,1250, 400,1250, 400,450,
  350,450, 400,450, 400,1250, 400,400, 400,450, 350,500,
  350,1300, 350,450, 400,450, 350,1300, 350,500, 350,450,
  350,500, 350,450, 400,450, 350,1300, 350,450, 400,1250,
  400,450, 350,450, 400,450, 350,1250, 450,400, 400,450,
  400,400, 400,450, 400,450, 350,450, 400,450, 350,450,
  400,450, 350,450, 400,1250, 400,450, 400,400, 400,450,
  400,450, 400,1200, 450,400, 400,450, 400,400, 400,450,
  400,400, 400,450, 400,450, 400,400, 400,400, 450,400,
  400,400, 450,400, 400,400, 450,400, 400,400, 450,400,
  400,400, 450,400, 400,450, 350,1250, 400,1250, 400,1250,
  400,1300, 350,450, 400
};

uint16_t tv_ligar_desligar[68] = {
  8900,4450, 600,550, 550,1700, 550,550, 550,1700,
  550,550, 550,1700, 550,1700, 550,1650, 550,1700,
  550,1650, 550,1700, 550,550, 550,550, 600,550,
  550,1700, 550,1700, 500,1700, 550,1700, 550,1650,
  550,550, 550,1700, 550,550, 550,600, 550,550,
  600,550, 550,550, 600,500, 550,1700, 550,550,
  600,1700, 500,1700, 550,1700, 500
};

uint16_t tv_volume_mais[68] = {
  8950,4450, 550,600, 550,1700, 500,600, 550,1700,
  500,600, 550,1700, 500,1700, 550,1700, 550,1700,
  500,1700, 550,1700, 550,550, 550,550, 550,600,
  550,1700, 500,1700, 550,1700, 550,1700, 500,1700,
  550,1700, 500,600, 550,550, 550,600, 550,550,
  550,550, 550,600, 550,550, 550,550, 600,1700,
  500,1700, 550,1700, 500,1700, 550
};

uint16_t tv_volume_menos[68] = {
  8900,4500, 550,550, 550,1700, 550,550, 550,1700,
  550,550, 550,1700, 550,1700, 500,1750, 500,1700,
  550,1700, 500,1700, 550,550, 550,600, 550,550,
  550,1700, 550,1700, 500,600, 550,550, 550,600,
  550,550, 550,1700, 550,550, 550,550, 550,600,
  550,1700, 500,1700, 550,1700, 550,1700, 500,600,
  550,1700, 500,1700, 550,1700, 500
};

void enviarCodigo(uint16_t* codigo, int tamanho) {
  IrSender.sendRaw(codigo, tamanho, 38); // Frequência 38kHz
}


void setup() {
  Serial.begin(9600);
  IrSender.begin(irLedPin);
  Serial.println(F("Menu Controle Remoto via Serial:"));
  Serial.println(F("Digite um número para enviar o comando:"));
  mostrarMenu();
}

void loop() {
if (Serial.available() > 0) {
    char opcao = Serial.read();

    // Ignora caracteres de nova linha
    if (opcao == '\n' || opcao == '\r') return;

    switch (opcao) {
      case '1':
        Serial.println("Enviando comando: Ar-condicionado - Ligar/Desligar");
        enviarCodigo(ar_ligar_desligar, sizeof(ar_ligar_desligar) / sizeof(unsigned int));
        break;
      case '2':
        Serial.println("Enviando comando: Ar-condicionado - Aumentar temperatura");
        enviarCodigo(ar_temp_mais, sizeof(ar_temp_mais) / sizeof(unsigned int));
        break;
      case '3':
        Serial.println("Enviando comando: Ar-condicionado - Diminuir temperatura");
        enviarCodigo(ar_temp_menos, sizeof(ar_temp_menos) / sizeof(unsigned int));
        break;
      case '4':
        Serial.println("Enviando comando: TV - Ligar/Desligar");
        enviarCodigo(tv_ligar_desligar, sizeof(tv_ligar_desligar) / sizeof(unsigned int));
        break;
      case '5':
        Serial.println("Enviando comando: TV - Aumentar volume");
        enviarCodigo(tv_volume_mais, sizeof(tv_volume_mais) / sizeof(unsigned int));
        break;
      case '6':
        Serial.println("Enviando comando: TV - Diminuir volume");
        enviarCodigo(tv_volume_menos, sizeof(tv_volume_menos) / sizeof(unsigned int));
        break;
      case 'm':
      case 'M':
        mostrarMenu();
        break;
      default:
        Serial.println("Opção inválida. Digite 'm' para ver o menu.");
        break;
    }

    // Limpa o buffer de entrada
    while (Serial.available()) Serial.read();
  }
}
