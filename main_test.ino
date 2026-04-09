#include <Servo.h>
Servo test1;
Servo test2;
void testa();
void testb();
void special();
void centerservo();
void centerservo2();

void setup() {
 test1.attach(3);
 test2.attach(5);

}

void loop() {
 testa();
 testb();
 delay(1000);
 special();

}

void testa() {
  test1.write(140);
  delay(2000);
  test1.write(0);
  delay(1500);
  centerservo();
  delay(2000);
}

void testb()
{
  test2.write(140);
  delay(2000);
  test2.write(0);
  delay(1500);
  centerservo2();
  delay(2000);
}


void centerservo() {
  delay(500);
  test1.write(140);
  delay(500);
}

void centerservo2() {
  delay(500);
  test2.write(140);
  delay(500);
}

void special()
{
  centerservo();
  centerservo2();
  delay(500);
  test1.write(140);
  test2.write(0);
  delay(1000);
  test1.write(0);
  test2.write(140);
  delay(1000);
  centerservo();
  centerservo2();
  for (int i=1;i <= 5; i++)
  {
  test1.write(140);
  test2.write(140);
  delay(500);
  test1.write(0);
  test2.write(0);
  delay(500);
  }
}

