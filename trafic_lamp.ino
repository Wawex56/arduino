const int buttonPin = 3;
const int yayakirmizled = 13; 
const int yayayesilled = 11; 
const int aracyesilled = 6; 
const int aracsariled = 8; 
const int arackirmizled = 10; 
bool toggleState = false;
unsigned long simdizaman;
unsigned long oncezaman=0;
int zaman = 0;

void setup()
{
   pinMode(buttonPin, INPUT_PULLUP);
   pinMode(aracyesilled, OUTPUT);
   pinMode(aracsariled, OUTPUT);
   pinMode(arackirmizled, OUTPUT);
   pinMode(yayakirmizled, OUTPUT);
   pinMode(yayayesilled, OUTPUT);
   Serial.begin(9600);
   digitalWrite(aracyesilled,HIGH);
   digitalWrite(yayakirmizled,HIGH);
  
}

void loop()
{

  simdizaman = millis(); 

  if(simdizaman-oncezaman > 1000){
    zaman++;
    oncezaman = simdizaman;
  }
     
 int readButton = digitalRead(buttonPin);
  
  if (readButton == 0) {
    
    toggleState = ! toggleState;
        
    if (zaman > 30){

     digitalWrite(aracyesilled,LOW);
     delay(500);
     digitalWrite(aracyesilled,HIGH); 
     delay(1000);
     digitalWrite(aracyesilled,LOW);
     delay(500);
     digitalWrite(aracyesilled,HIGH); 
     delay(1000); 
     digitalWrite(aracyesilled,LOW);
     delay(500);
     digitalWrite(aracyesilled,HIGH); 
     delay(1000);        
     digitalWrite(aracyesilled,LOW);       
     delay(1000);             
     digitalWrite(aracsariled,HIGH);  
     delay(3000);           
     digitalWrite(aracsariled,LOW);  
     digitalWrite(arackirmizled,HIGH);
     digitalWrite(yayayesilled,HIGH); 
     digitalWrite(yayakirmizled,LOW); 
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
    digitalWrite(yayakirmizled,HIGH);    
       delay(5000);
             
     digitalWrite(aracsariled,HIGH);  
      delay(2000);
             
     digitalWrite(aracsariled,LOW);  
     digitalWrite(arackirmizled,LOW);  
     digitalWrite(aracyesilled,HIGH);  
      
     zaman = 0;
      
    }else if(zaman < 30){
      int KalanSn = 30 - zaman;
      delay(KalanSn*1000);
         digitalWrite(aracyesilled,LOW);
      delay(500);
     digitalWrite(aracyesilled,HIGH); 
     delay(1000);
     digitalWrite(aracyesilled,LOW);
     delay(500);
     digitalWrite(aracyesilled,HIGH); 
     delay(1000); 
     digitalWrite(aracyesilled,LOW);
     delay(500);
     digitalWrite(aracyesilled,HIGH); 
     delay(1000);      
     digitalWrite(aracyesilled,LOW);       
     delay(1000);           
     digitalWrite(aracsariled,HIGH);  
     delay(3000);         
     digitalWrite(aracsariled,LOW);  
     digitalWrite(arackirmizled,HIGH);
     digitalWrite(yayayesilled,HIGH); 
     digitalWrite(yayakirmizled,LOW); 
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
    digitalWrite(yayakirmizled,HIGH);    
      delay(5000);
    digitalWrite(aracsariled,HIGH);  
      delay(2000);
             
     digitalWrite(aracsariled,LOW);  
     digitalWrite(arackirmizled,LOW);  
     digitalWrite(aracyesilled,HIGH);   
     zaman = 0;
    }
    delay(500);
  }
  
}
