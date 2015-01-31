// Light sensor test

int lightLevel;

unsigned long time;


void setup(void)
{
  
  // Init serial
  Serial.begin(9600);
  
}
  
void loop(void)
{

    
    // Measure light level
    lightLevel = analogRead(A0);

    
    // Print measurement
    Serial.print("Light level: ");
    Serial.println(lightLevel);
    
    // Wait 2 seconds
    delay(2000);
  
}
