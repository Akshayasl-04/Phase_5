#include <ThingSpeak.h>

// Variables for data and ThingSpeak configuration
const unsigned long Channel_ID = 2319356; // Your ThingSpeak Channel ID
const char* myWriteAPIKey = "G6O6VAYLTD1H9T8Z"; // Your ThingSpeak Write API Key
const int Field_Number_1 = 1;

int value_1 = 0;

void setup() {
  Serial.begin(115200); // For debugging in the simulation
}

void loop() {
  // Simulate data retrieval (you can use Serial input for data simulation)
  if (Serial.available() > 0) {
    value_1 = Serial.parseInt();
    Serial.print("Value received: ");
    Serial.println(value_1);
  }

  // Simulate sending data to ThingSpeak
  Serial.print("Sending data to ThingSpeak - Channel ID: ");
  Serial.print(Channel_ID);
  Serial.print(", Field: ");
  Serial.print(Field_Number_1);
  Serial.print(", Value: ");
  Serial.println(value_1);

  // Delay for simulation purposes
  delay(15000);
}
