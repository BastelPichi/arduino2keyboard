import serial
from pyautogui import press
import json


arduino = serial.Serial(port=input("What port is the arduino on? "), baudrate=9600, timeout=.1)
try:
    f = open("config.txt")
    print("Ready! Waiting for keypresses...")
    keys = json.loads(f.read().replace("'", "\""))
    while True:
        pin = arduino.readline().decode()
        if pin in keys:
            key = keys[pin]
            press(key)



except FileNotFoundError:
    print("Theres no config yet, create one by launching createconfig.py!")
