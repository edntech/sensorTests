#include "DHT.h"

#define DHTPIN 4 // temperature & humidity sensor pin

// Variables
int lightLevel;
float humidity;
float temperatureC;
float temperatureF;

// Initialize DHT sensor for normal 16mhz Arduino
DHT dht(DHTPIN, DHT11);

void setup(void)
{
  // Init serial
  Serial.begin(9600);
  
  // Configure the temperature and humidity pin
  dht.begin();
  
}
  
void loop(void)
{

  checkSensors();  
  
  // Wait 2 seconds
  delay(2000);
  
}

void checkSensors() {
  
  // Measure light level
  lightLevel = analogRead(A0);
  
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  humidity = dht.readHumidity();
  // Read temperature as Celsius
  temperatureC = dht.readTemperature();
  // Read temperature as Fahrenheit
  temperatureF = dht.readTemperature(true);



    
  // Print measurement
  Serial.print("Light level: ");
  Serial.println(lightLevel);
  Serial.print("Humidity: "); 
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: "); 
  Serial.print(temperatureC);
  Serial.print(" *C ");
  Serial.print(temperatureF);
  Serial.print(" *F\n");
}
