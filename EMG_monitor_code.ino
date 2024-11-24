//myoware connection
#define SENSOR_PIN 0

//Integer for sensor value
int sensorValue;


void setup() {
  // Serial port
  Serial.begin(9600);

}

void loop() {
  // sensor value
  sensorValue = analogRead(SENSOR_PIN);

  //print to serial monitor
  Serial.println(sensorValue);

}
