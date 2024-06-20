Text
int PWM_Pin = 9;      // LED connected to digital pin 9
int DIR_Pin = 8;
int SignalUp = 10;
int SignalDown = 11;

int MoveUp = 6;
int MoveDown = 7;

void setup() 
{
  pinMode(MoveUp, INPUT);
  pinMode(MoveDown, INPUT);
  
  pinMode(SignalUp, INPUT);
  pinMode(SignalDown, INPUT);
  
  pinMode(DIR_Pin, OUTPUT);
  pinMode(PWM_Pin, OUTPUT);  // sets the pin as output

  pinMode(13, OUTPUT);
}

void loop() {    
  if ((digitalRead(SignalUp) == LOW) & (digitalRead(MoveUp) == HIGH))
  {
    digitalWrite(13, HIGH);
    digitalWrite(DIR_Pin, HIGH);
    analogWrite(PWM_Pin, 127);
  }
  
  else if ((digitalRead(SignalDown) == LOW) & (digitalRead(MoveDown) == HIGH))
  {
    digitalWrite(13, HIGH);
    digitalWrite(DIR_Pin, LOW);
    analogWrite(PWM_Pin, 127);
  }

  else
  {
    digitalWrite(13, LOW);
    analogWrite(PWM_Pin, 0);
  }
}