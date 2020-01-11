#include <SoftwareSerial.h>

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop() {  
  int n=0;int dec=0;
  while(Serial.available()>0){
    delay(10);
     Serial.print("Enter the binary number : ");       
     dec=Serial.parseInt();  
     n+=dec; 

  }
  if(n>0){
    int arr[5];
    int k=0;
        while (n != 0) {
            arr[k] = n%2;
            n=n/2;
            k++;
        }    
    int i=0;
    for(i=2;i>=0;i--)
    {Serial.print(arr[i]);
      if(arr[i]==1){
        digitalWrite(6-i,HIGH);
      }
      else{
        digitalWrite(6-i,LOW);
      }
      
    }
 
}
}
