import serial

arduino = serial.Serial(port="/dev/ttyUSB0", baudrate=9600, timeout=.1)

keys = list(range(0, int(input("How many keys are there? "))))

keydefs = {}

for key in keys:
    pin = ""
    print(f"Please press key{key + 1}!")
    while pin == "":
        pin = arduino.readline().decode()
    action = input("And what key should be on that char?(e.g. f1) ")
    keydefs[pin] = action

f = open("config.txt", "w")
f.write(str(keydefs))
f.close()
print("Coolio, should be ok!")