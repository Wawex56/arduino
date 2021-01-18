const int buttonPin = 3;
const int walkerredlight = 13; 
const int walkergreenlight= 11; 
const int cargreenlight = 6; 
const int caryellowlight = 8; 
const int carredlight = 10; 
bool toggleState = false;
unsigned long aftertime;
unsigned long beforetime=0;
int time= 0;

void setup()
{
   pinMode(buttonPin, INPUT_PULLUP);
   pinMode(cargreenlight, OUTPUT);
   pinMode(caryellowlight, OUTPUT);
   pinMode(carredlight, OUTPUT);
   pinMode(walkerredlight, OUTPUT);
   pinMode(yayayesilled, OUTPUT);
   Serial.begin(9600);
   digitalWrite(cargreenlight,HIGH);
   digitalWrite(walkerredlight,HIGH);
  
}

void loop()
{

  aftertime = millis(); 

  if(aftertime-beforetime > 1000){
   time++;
    beforetime = aftertime;
  }
     
 int readButton = digitalRead(buttonPin);
  
  if (readButton == 0) {
    
    toggleState = ! toggleState;
        
    if (time> 30){

     digitalWrite(cargreenlight,LOW);
     delay(500);
     digitalWrite(cargreenlight,HIGH); 
     delay(1000);
     digitalWrite(cargreenlight,LOW);
     delay(500);
     digitalWrite(cargreenlight,HIGH); 
     delay(1000); 
     digitalWrite(cargreenlight,LOW);
     delay(500);
     digitalWrite(cargreenlight,HIGH); 
     delay(1000);        
     digitalWrite(cargreenlight,LOW);       
     delay(1000);             
     digitalWrite(caryellowlight,HIGH);  
     delay(3000);           
     digitalWrite(caryellowlight,LOW);  
     digitalWrite(carredlight,HIGH);
     digitalWrite(yayayesilled,HIGH); 
     digitalWrite(walkerredlight,LOW); 
     delay(15000);       
  
     digitalWrite(yayayesilled,LOW); 
      delay(500);
     digitalWrite(yayayesilled,HIGH); 
      delay(500);
     digitalWrite(yayayesilled,LOW); 
      delay(500);
     digitalWrite(yayayesilled,HIGH); 
      delay(500);
     digitalWrite(yayayesilled,LOW); 
      delay(500);
     digitalWrite(yayayesilled,HIGH); 
            delay(500);
    digitalWrite(yayayesilled,LOW); 
         delay(1000);
    digitalWrite(walkerredlight,HIGH);    
       delay(5000);
             
     digitalWrite(caryellowlight,HIGH);  
      delay(2000);
             
     digitalWrite(caryellowlight,LOW);  
     digitalWrite(carredlight,LOW);  
     digitalWrite(cargreenlight,HIGH);  
      
     time= 0;
      
    }else if(time< 30){
      int KalanSn = 30 -time;
      delay(KalanSn*1000);
         digitalWrite(cargreenlight,LOW);
      delay(500);
     digitalWrite(cargreenlight,HIGH); 
     delay(1000);
     digitalWrite(cargreenlight,LOW);
     delay(500);
     digitalWrite(cargreenlight,HIGH); 
     delay(1000); 
     digitalWrite(cargreenlight,LOW);
     delay(500);
     digitalWrite(cargreenlight,HIGH); 
     delay(1000);      
     digitalWrite(cargreenlight,LOW);       
     delay(1000);           
     digitalWrite(caryellowlight,HIGH);  
     delay(3000);         
     digitalWrite(caryellowlight,LOW);  
     digitalWrite(carredlight,HIGH);
     digitalWrite(yayayesilled,HIGH); 
     digitalWrite(walkerredlight,LOW); 
     delay(15000);   
 
    digitalWrite(yayayesilled,LOW); 
      delay(500);
    digitalWrite(yayayesilled,HIGH); 
      delay(500);
    digitalWrite(yayayesilled,LOW); 
      delay(500);
    digitalWrite(yayayesilled,HIGH); 
      delay(500);
    digitalWrite(yayayesilled,LOW); 
      delay(500);
    digitalWrite(yayayesilled,HIGH); 
      delay(500);
    digitalWrite(yayayesilled,LOW); 
      delay(1000);
    digitalWrite(walkerredlight,HIGH);    
      delay(5000);
    digitalWrite(caryellowlight,HIGH);  
      delay(2000);
             
     digitalWrite(caryellowlight,LOW);  
     digitalWrite(carredlight,LOW);  
     digitalWrite(cargreenlight,HIGH);   
     time= 0;
    }
    delay(500);
  }
  
}
