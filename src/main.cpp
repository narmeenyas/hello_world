#include <Arduino.h>
#define LED_GPIO 8

void setup()
{
  Serial.begin(9600);
  Serial.println("hello");
  pinMode(LED_GPIO, OUTPUT);
}

void loop()
{
  Serial.println("loop");
  //z
  digitalWrite(LED_GPIO, LOW);//dash
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);//dash
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //e
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //i
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //n
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //a
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);


  //delay between words
  digitalWrite(LED_GPIO, HIGH);
  delay(1050);

  //a
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);


  //b
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //u
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(1050);

  //t
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //o
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //a
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);


  //m
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //a
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);


  digitalWrite(LED_GPIO, HIGH);
  delay(1050);

  //,
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(1050);





  //n
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //a
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //r
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

 

  //m
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //e
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //e
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //n
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(1050);

  //y
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //a
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(450);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //s
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //s
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //i
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);//dot
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(450);

  //n
  digitalWrite(LED_GPIO, LOW);
  delay(450);
  digitalWrite(LED_GPIO, HIGH);
  delay(150);
  digitalWrite(LED_GPIO, LOW);
  delay(150);

  digitalWrite(LED_GPIO, HIGH);
  delay(1050);


































  



  


  digitalWrite(LED_GPIO, HIGH);
  delay(1050);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}