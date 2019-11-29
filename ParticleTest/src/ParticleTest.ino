/*
 * Project ParticleTest
 * Description:
 * Author:
 * Date:
 */

// bool buttonPressed = false;
// bool messageSent = false;

String testString = "pie";

void button_handler(system_event_t event, int duration, void *)
{
  // if (!duration)
  // {
  //   buttonPressed = true;
  //   digitalWrite(D7, HIGH);
  // }
  // else
  // {
  //   buttonPressed = false;
  //   messageSent = false;
  //   digitalWrite(D7, LOW);
  // }
}

// setup() runs once, when the device is first turned on.
void setup()
{
  Particle.variable("test1", testString);
  // Serial.begin(9600);
  // pinMode(D7, OUTPUT);
  // System.on(button_status, button_handler);
  // Put initialization like pinMode and begin functions here.
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  delay(100);
  testString = "abc123";
  // if (buttonPressed && !messageSent)
  // {
  //   Mesh.publish("toggle-led");
  //   Serial.println("Button push published!");
  //   messageSent = true;
  // }
}