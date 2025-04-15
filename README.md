# 🏠 automantionHouse

Controlando com comandos de voz usando **Raspberry Pi**, **Arduino**, sinais **RF (radiofrequência)** e **infravermelho**. Este projeto permite acionar luzes, TV e ar-condicionado de maneira inteligente com comandos falados em português!

## 🎯 Funcionalidades

- Comandos de voz reconhecidos em tempo real
- Comunicação serial entre Raspberry Pi e Arduino
- Controle de dispositivos por sinais RF (ex: luzes sem fio)
- Controle de dispositivos IR (ex: TV e ar-condicionado)
- Palavras-chave como: “ligar TV”, “desligar ar”, “ligar luz”, etc.


## 🧰 Requisitos

### Hardware

- Raspberry Pi com Python instalado
- Arduino Uno (ou compatível)
- Módulo transmissor RF 433MHz
- LED infravermelho
- Cabos jumpers

### Software

- Python 3
- Bibliotecas Python:
  - `sounddevice`
  - `numpy`
  - `speechrecognition`
  - `pyserial`
  - `wave`

Instale com:

```bash
pip install sounddevice numpy SpeechRecognition pyserial
