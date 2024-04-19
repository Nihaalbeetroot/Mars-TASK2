// Define stepper motor connections:
#define dirPin 4
#define stepPin 3
#define ir_r 9
#define ir_l 10
#define Vcc 8

int right;
int left;

void setup() {
  //Stepper motor pins
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

  //ir pins
  pinMode(ir_r,INPUT);
  pinMode(ir_l,INPUT);

  //fake vcc
  pinMode(Vcc,OUTPUT);
  digitalWrite(Vcc,HIGH); 

  //Serial Monitor
  Serial.begin(9600);

}

void loop() {

  //Taking left and right ir inputs
  right = digitalRead(ir_r);
  left = digitalRead(ir_l);

  //If no object
  if(right == HIGH && left == HIGH)
  {
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }
  //If object is on
  else
  {
    //Right ir
    if(right == LOW)
    {
      digitalWrite(dirPin,HIGH);
    }

    //Left ir
    else if(left == LOW)
    {
      digitalWrite(dirPin,LOW);
    }

    //Moving the stepper

    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);

  }

}