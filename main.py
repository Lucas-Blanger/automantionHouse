import serial
import speech_recognition as sr
import time

arduino = serial.Serial("COM3", 9600)
time.sleep(2)


def ouvirComando():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Diga um comando (ex: 'ligar ar' ou 'desligar ar')...")
        audio = r.listen(source)

        try:
            comando = r.recognize_google(audio, language="pt-BR").lower()
            print(f"Comando reconhecido: {comando}")
            return comando
        except sr.UnknownValueError:
            print("Não entendi o que foi dito.")
        except sr.RequestError:
            print("Erro ao acessar o serviço de reconhecimento de voz.")
        return ""


def enviarComando(comando):
    if "desligar ar" in comando:
        arduino.write(b"DESLIGAR\n")
        print("Enviado: DESLIGAR")
    elif "ligar ar" in comando:
        arduino.write(b"LIGAR\n")
        print("Enviado: LIGAR")
    elif "aumentar ar" in comando:
        arduino.write(b"AUMENTARAR\n")
        print("Enviado: AUMENTARAR")
    elif "diminuir ar" in comando:
        arduino.write(b"DIMINUIRAR\n")
        print("Enviado: DIMINUIRAR")
    elif "ligar TV" in comando:
        arduino.write(b"LIGARTV\n")
        print("Enviado:LIGARTV")
    elif "desligar TV" in comando:
        arduino.write(b"DESLIGARTV\n")
        print("Enviado: DESLIGARTV")
    elif "aumentar TV" in comando:
        arduino.write(b"AUMENTARTV\n")
        print("Enviado: AUMENTARTV")
    elif "diminuir TV" in comando:
        arduino.write(b"DIMINUIRTV\n")
        print("Enviado: DIMINUIRTV")
    elif "ligar luz" in comando:
        arduino.write(b"LIGARLUZ\n")
        print("Enviado: LIGARLUZ")
    else:
        print("Comando não reconhecido para envio.")


while True:
    comando = ouvirComando()
    enviarComando(comando)
