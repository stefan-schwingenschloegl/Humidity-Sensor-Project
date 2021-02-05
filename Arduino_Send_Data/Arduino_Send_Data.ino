/*

For this Script I adapted Code from 
- Funduino GmbH - Ralf Smieders available on (https://funduino.de/anleitung-dht11-dht22)
- Cranfield University Geothread Blog available on (http://www.geothread.net/arduino-making-a-simple-bluetooth-data-logger/) 

*/


/* Load rquired Libraries*/
#include <DHT.h>
#include <SoftwareSerial.h>

/* Define Pins on Elegoo UNO*/
#define DHTPIN 2 
#define TXPIN 5
#define RXPIN 6    

/* Define Instances */
DHT dht(DHTPIN, DHT22); 
SoftwareSerial hc_05(TXPIN,RXPIN);

void setup() {
  /* Start Program on Elegoo UNO*/
  hc_05.begin(9600);
  dht.begin(); //DHT11 Sensor starten
}

void loop() {

  /* Measure Humidity and Temperature every 5 seconds */
  delay(5000); // Wait for 5 Seconds
  float hum = dht.readHumidity(); //get humidity
  float temp = dht.readTemperature();//get temperature

  /* Send Values via Bluetooth as String in Format "humTtemp" (Example: "56.30T24.50") */
  hc_05.print(hum);
  hc_05.print("T");
  hc_05.println(temp);

}
