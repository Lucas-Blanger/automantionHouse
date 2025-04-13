import sounddevice as sd
import numpy as np
import speech_recognition as sr
import serial
import time
import io
import wave

arduino = serial.Serial("/dev/ttyUSB0", 9600)
time.sleep(2)


def gravar_audio(duracao=6, fs=16000):
    print("Gravando... Fale agora!")
    audio = sd.rec(int(duracao * fs), samplerate=fs, channels=1, dtype="int16")
    sd.wait()
    print("Gravação finalizada.")
    return audio, fs


def audio_para_audioData(audio_np, fs):
    buffer = io.BytesIO()
    with wave.open(buffer, "wb") as wf:
        wf.setnchannels(1)
        wf.setsampwidth(2)
        wf.setframerate(fs)
        wf.writeframes(audio_np.tobytes())
    buffer.seek(0)
    return sr.AudioData(buffer.read(), fs, 2)


def ouvirComando():
    audio_np, fs = gravar_audio()
    audio_data = audio_para_audioData(audio_np, fs)

    recognizer = sr.Recognizer()
    try:
        comando = recognizer.recognize_google(audio_data, language="pt-BR").lower()
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
    elif "ligar tv" in comando:
        arduino.write(b"LIGARTV\n")
        print("Enviado: LIGARTV")
    elif "desligar tv" in comando:
        arduino.write(b"DESLIGARTV\n")
        print("Enviado: DESLIGARTV")
    elif "aumentar tv" in comando:
        arduino.write(b"AUMENTARTV\n")
        print("Enviado: AUMENTARTV")
    elif "diminuir tv" in comando:
        arduino.write(b"DIMINUIRTV\n")
        print("Enviado: DIMINUIRTV")
    elif "ligar luz" in comando:
        arduino.write(b"LIGARLUZ\n")
        print("Enviado: LIGARLUZ")
    else:
        print("Comando não reconhecido para envio.")


# Loop principal
while True:
    comando = ouvirComando()
    enviarComando(comando)
