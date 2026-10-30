# ESP32-C3 Morse Code Name Blinker

A C++ program for the **ESP32-C3** microcontroller that blinks the on-board LED to spell out the names of our team members in **Morse code**.

## How it works

The program drives the LED connected to **GPIO 8** on the ESP32-C3. Each letter of every team member's name is converted into Morse code and shown as a sequence of short and long flashes:

| Symbol | Meaning | LED on for |
|--------|---------|------------|
| `.`    | dot     | 150 ms     |
| `-`    | dash    | 450 ms (3 × dot) |

Between flashes the LED turns off, with longer pauses between letters and between names, so the message can be read by eye.

The program also prints to the serial monitor (9600 baud), which is useful for checking that the board is running.

## Hardware

- ESP32-C3 development board (with an LED on GPIO 8)
- USB cable for power and uploading

> **Note:** On many ESP32-C3 boards the on-board LED is *active-low*, meaning it lights up when the pin is `LOW` and turns off when it is `HIGH`.

## Project structure

```
hello_world/
├── src/
│   └── main.cpp        # Main program: setup() and loop()
├── platformio.ini      # PlatformIO board and build settings
└── .gitignore
```

## Changing the names

To blink different names, edit the Morse sequences in `src/main.cpp` and upload again.
