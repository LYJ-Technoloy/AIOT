#include "DHT.h" //Use DHT.h function library

#define DHTPIN 5 //Define pin
#define DHTTYPE DHT11 //Define sensor type
DHT dht(DHTPIN, DHTTYPE); //Read DHT sensor content

float t = 0;//Data type is floating point
float h = 0;//Data type is floating point

void setup() {
  Serial.begin(9600); //Set baud
  Serial.println("DHT11 sensor!");//After the print string wrap
  dht.begin();//dht start
}

void loop() {
  // put setup code here, to run repeatedly:
  h = dht.readHumidity();//h is the value of dht.readHumidity
  t = dht.readTemperature();//t is the value of dht.readTemperature

  Serial.print("Humidity: ");//Print out the string Humidlty:
  Serial.print(h);//Print out the value of h
  Serial.print(" %\t");//Print out the string %t, then wrap after
  Serial.print("Temperature: ");//Print out the string Temperature:
  Serial.print(t);//Print out the value of t
  Serial.println(" *C ");//Print out the string *C, then wrap after
  delay(1000);//Delay 1000ms (1 seconds) 
}
