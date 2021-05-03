int red =   5;  //Set the red pin to 5
int green = 17; //Set the green pin to 17
int blue =  16; //Set the blue pin to 16

 
void setup()
{
//Initialize digital pins as outputs
  Serial.begin(9600); //Set baud  
  pinMode(red, OUTPUT);//Set the red pin as output
  pinMode(green, OUTPUT);//Set the green pin as output
  pinMode(blue, OUTPUT);//Set the blue pin as output
  digitalWrite(red, HIGH);//sets the digital red  on
  digitalWrite(green, HIGH);//sets the digital green on
  digitalWrite(blue, HIGH);//sets the digital pin blue on
}
 

void loop() {
// The program example will loop
  digitalWrite(red, HIGH); //sets the digital red  on
  delay(1000); //Delay 1000ms (1 seconds) 
  digitalWrite(red, LOW); //sets the digital red  off
  delay(1000); //Delay 1000ms (1 seconds)


  digitalWrite(green, HIGH); //sets the digital green  on
  delay(1000); // 
  digitalWrite(green, LOW);//sets the digital green  off
  delay(1000); // 



  digitalWrite(blue, HIGH); //sets the digital blue  on 
  delay(1000); //
  digitalWrite(blue, LOW); //sets the digital blue  on 
  delay(1000); // 
}
