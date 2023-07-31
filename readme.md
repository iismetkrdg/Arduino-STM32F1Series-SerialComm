# Hardware Serial (STM32F103C8T6 BLUE PILL & ARDUINO UNO)
There are two different communication methods in microcontrollers, one is software serial, and the other is hardware serial. For some controllers (e.g., STM32F1 series), hardware serial comes with dedicated pins. This is known as hardware serial. However, in other microcontrollers like Arduino, we use hardware serial for communication between the microcontroller and the computer.

I realized that I couldn't establish serial communication between my STM32F103C8T6 "blue pill" and my computer using the USB port. Therefore, I decided to use Arduino Uno as a serial communication tool. You can achieve this by uploading the code from the repository to both Arduino and the "blue pill" and then making the necessary connections.

### Wiring Connection

Arduino Uno P10 <=> STM32F103C8T6 PA2    

Arduino Uno P11 => STM32F103C8T6 PA3    

Arduino Uno GND => STM32F103C8T6 GND (if Arduino & STM32, both are not connected to the computer, STM32 for power)

