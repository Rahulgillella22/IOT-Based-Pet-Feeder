# IOT-Based-Pet-Feeder
The IoT-based Pet Feeder is a smart feeding system that allows pet owners to control and monitor their pet’s feeding remotely using the Blynk app. The system is built using ESP32, a servo motor, and Blynk IoT, enabling scheduled and manual food dispensing 

# Set Up  
Download and install Arduino IDE.
Install the necessary libraries (Blynk, ESP8266WiFi, Servo).
Upload the code to the ESP8266 board.
# Connections used in this code 
 ESP8266 Wi-Fi Module: 
   - Used to connect to the internet and communicate with the **Blynk cloud**.
 Servo Motor:**  
   - Signal (PWM) Pin → GPIO4 (D2 on ESP8266)
   - VCC (Power) → 5V
   - GND → GND
  Wi-Fi Connection:
   - The ESP8266 connects to the **Wi-Fi network** using the SSID and password provided in the code.
  Blynk Virtual Pin (V0):
   - The Blynk app button (V0) controls the servo motor, making it move to different angles when pressed.

# Configure the Blynk Console :
Create a new project
Add a button widget (linked to Virtual Pin V0)
Get the Blynk Auth Token and update it in the code
Connect the hardware and test the system.
Note that if possible, use the **Quick Start** section for setting up a new device. In my case, my device was unable to connect with Blynk using the regular method, but it connected easily through the **Quick Start** option. Additionally, it provides a step-by-step guide to help with the setup.

![Blynk Console](https://raw.githubusercontent.com/Rahulgillella22/IOT-Based-Pet-Feeder/main/blynkconsole.png)

# Blynk App 
Once you enter your **email and password** in the **Blynk app**, it will automatically log in and connect to your device if it was previously configured. If your device is already set up, it should **reconnect automatically** to Blynk when powered on, without needing to manually connect it again.


# Things to Consider While Using This Project:  

1. Servo Motor Positioning Issues:  
   - Since we are using a standard educational servo motor, it may not always return exactly to the same position.  
   - Small calibration errors can occur, so you may need to adjust the angle values in the code.  
   - If precision is needed, consider using a servo with feedback or adding a limit switch.  

2. Weight of Food in the Feeder:  
   - If too much food is stored in the feeder, the servo motor may struggle to rotate properly due to excess weight.  
   - Make sure the feeder is lightweight and the motor has sufficient torque to handle it.  

3. Wi-Fi Connectivity Issues:  
   - Since the ESP8266 relies on Wi-Fi, interruptions in the connection may cause delays in feeding.  
   - If the Wi-Fi is unstable, consider adding a reconnect function in the code to handle disconnections.  

4. Blynk App Delays:  
   - Sometimes, the Blynk app may lag, causing a delay between pressing the button and the servo moving.  
   - This is normal in cloud-based systems
  

      # [![Watch on YouTube](https://img.shields.io/badge/Watch%20on-YouTube-red?style=for-the-badge&logo=youtube)](https://youtu.be/h2l5QHMlemQ)



