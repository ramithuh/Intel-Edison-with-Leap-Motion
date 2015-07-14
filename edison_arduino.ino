int led=8; //int for led pin number
int c = -1; // int for income value
 
void setup()
{ 
  
  Serial.begin(115200); //set serial with baud rate
  pinMode(led,OUTPUT); //set the pin as an output
 
 
}
 
void loop()
{ 
 
  
  if (Serial.available()>0){  //if we have incoming value
      c =Serial.read()-48; //read the value minus 48  
  //  Serial.write(c);
    if(c == 0) digitalWrite(led,LOW); //if 0 fingers turn off led
    else if(c == 5) digitalWrite(led,HIGH); //if 5 fingers turn on led
  }
}
