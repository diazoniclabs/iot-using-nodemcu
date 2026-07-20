# IoT-using-nodemcu(1.0)

1. All programs were written using **Arduino IDE 2.3.10**. You can download it from the official Arduino website: [Arduino IDE](https://www.arduino.cc/en/software/).

2.Install the driver for NodeMCU(1.0). 

Link for driver (CP2102) - https://www.silabs.com/documents/public/software/CP210x_Universal_Windows_Driver.zip 
- Unzip the file. Right click on silabser.inf and select install. 

- Check on Device Manager. You should get something like this.

<img width="783" height="566" alt="image" src="https://github.com/user-attachments/assets/ad9ff814-6c20-4360-835e-4263e55942ef" />


3. In Arduino IDE, Open **File → Preferences**. Add the ESP8266 Boards URL:

   ```
   https://arduino.esp8266.com/stable/package_esp8266com_index.json
   ```

   ESP8266 Package Manager version: 3.1.2 ( July 2026)

<img width="296" height="355" alt="image" src="https://github.com/user-attachments/assets/d849dd3a-10b0-457f-9bb4-d0772f3bd2ac" />

https://github.com/esp8266/Arduino#installing-with-boards-manager 

4. Open **Tools → Board → Boards Manager**.
5. Search for **ESP8266** and install **esp8266 by ESP8266 Community**.
6. Select **Tools → Board → NodeMCU 1.0 (ESP-12E Module)**.

To install libraries:
1. Open **Sketch → Include Library → Manage Libraries**.
2. Search for **DHT sensor library** by **Adafruit** and install it.
3. Install the **Adafruit Unified Sensor** library when prompted.
4. Connect the NodeMCU, select the correct **Port**, and upload the sketch.


Note : This Adafruit Unified Sensor Library has to used if prompted
