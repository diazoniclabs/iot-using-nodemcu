# IoT-using-nodemcu(1.0)

1. All programs were written using **Arduino IDE 2.3.10**. You can download it from the official Arduino website: [Arduino IDE](https://www.arduino.cc/en/software/).

2. Open **File → Preferences**.
3. Add the ESP8266 Boards URL:

   ```
   https://arduino.esp8266.com/stable/package_esp8266com_index.json
   ```

   ESP8266 Package Manager version: 3.1.2 ( July 2026)

<img width="296" height="355" alt="image" src="https://github.com/user-attachments/assets/d849dd3a-10b0-457f-9bb4-d0772f3bd2ac" />

4. Open **Tools → Board → Boards Manager**.
5. Search for **ESP8266** and install **esp8266 by ESP8266 Community**.
6. Select **Tools → Board → NodeMCU 1.0 (ESP-12E Module)**.
7. Open **Sketch → Include Library → Manage Libraries**.
8. Search for **DHT sensor library** by **Adafruit** and install it.
9. Install the **Adafruit Unified Sensor** library when prompted.
10. Connect the NodeMCU, select the correct **Port**, and upload the sketch.


Libraries used:

1. DHT11 
2. Thingspeak - 
3. Adafruit_MQTT

Adafruit Unified Sensor Library
