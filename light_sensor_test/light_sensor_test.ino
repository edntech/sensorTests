// Light sensor test

int lightLevel;


void setup(void)
{
  
  // Init serial
  Serial.begin(9600);
  
}
  
void loop(void)
{

    
  // Wait 2 seconds
  delay(2000);
  
}

void checkSensors() {
  
  // Measure light level
  lightLevel = analogRead(A0);

    
  // Print measurement
  Serial.print("Light level: ");
  Serial.println(lightLevel);
}
