#include <SoftwareSerial.h>

SoftwareSerial mySerial(20,21); // RX, TX

int count=0;

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  mySerial.begin(115200);
  mySerial.println("-------------"); 
}

void loop() 
{   
    
    
    if ( count>=0) {
    count++ ;                //Incrementa o contador
    mySerial.println(count);  //Imprime o valor por consola
    delay (1000);            // Retardo
  }
}
