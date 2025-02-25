#define BLYNK_TEMPLATE_ID "Your_Template_ID"
#define BLYNK_TEMPLATE_NAME "Your_Template_Name"
#define BLYNK_AUTH_TOKEN "Your_Blynk_Auth_Token"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

// Replace with your actual Wi-Fi credentials
char ssid[] = "Your_SSID";  
char pass[] = "Your_Password";

Servo myServo;

BLYNK_WRITE(V0) { // Virtual pin V0 in Blynk
  if (param.asInt() == 1) { // If the button is pressed in the Blynk app
    Serial.println("Button pressed, rotating servo to 180 degrees");
    myServo.write(180);
    delay(1000); // Adjust delay based on servo speed
    myServo.write(90);
    Serial.println("Servo stopped at 180 degrees");

    Serial.println("Rotating servo to 90 degrees");
    myServo.write(0);
    delay(500); // Adjust delay for servo speed
    myServo.write(90);
    Serial.println("Servo stopped at 90 degrees, waiting for 5 seconds");
    delay(5000);

    Serial.println("Returning servo to initial position");
    myServo.write(0);
    delay(500);
    myServo.write(90);
    Serial.println("Servo returned to initial position");
  }
}

void setup() {
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  myServo.attach(4); // Connect servo signal to GPIO D2 (GPIO4)
  myServo.write(90); // Start in a neutral position
  Serial.println("Servo initialized");
}

void loop() {
  Blynk.run();
}
