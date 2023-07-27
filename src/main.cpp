#include <Arduino.h>

#define LED 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  Serial.println("LED is on");
  delay(500);
  digitalWrite(LED, LOW);
  Serial.println("LED is off");
  delay(500);
}

/* INFO FROM AMAZON on this specific ESP 32 board
HiLetgo ESP-WROOM-32 ESP32 ESP-32S Development Board 2.4GHz Dual-Mode WiFi + Bluetooth Dual Cores Microcontroller
The ESP32 integrated with Antenna switches, RF Balun, power amplifiers, low-noise amplifiers, filters, and management modules, and the entire solution occupies the least area of PCB. 2.4 GHz Wi-Fi plus Bluetooth dual-mode chip, with TSMC Ultra-low power consumption 40nm technology, power dissipation performance and RF performance is the best, safe and reliable, easy to extend to a variety of applications.
Reference links of ESP32 at below:
https://github.com/espressif/arduino-esp32
https://github.com/nodemcu/nodemcu-firmware/tree/dev-esp32
Package included:
1 * HiLetgo ESP-WROOM-32 ESP32 ESP-32S Development Board

If it cann't get bluetooth working.
Using Node32s as the Board selection. To reference GPIO pins in code use just the number, for example "digitalWrite(13, HIGH)" sets GPIO13 high. The built-in LED to GPIO2.
*/