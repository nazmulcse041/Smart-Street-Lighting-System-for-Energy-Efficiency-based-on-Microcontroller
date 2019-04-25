int ir1 = 9;
int ir2 = 10;
int ir3 = 11;
int ir4 = 12;

int ldr = A0;

int led1 = 3;
int led2 = 4;
int led3 = 5;
int led4 = 6;

int p1 = 0;
int p2 = 0;
int p3 = 0;
int p4 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);

  pinMode(ldr, INPUT);
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  int val = analogRead(ldr);
  p1 = digitalRead(ir1);
  p2 = digitalRead(ir2);
  p3 = digitalRead(ir3);
  p4 = digitalRead(ir4);

  if(val >= 300)
  {
    
  }

  else
  {
     if(p1 == HIGH)
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
    }

    else
    {
      digitalWrite(led1,HIGH);
      digitalWrite(led2,HIGH);
    }

    if(p2 == HIGH)
    {
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
    }

    else
    {
      digitalWrite(led2,HIGH);
      digitalWrite(led3,HIGH);
    }

    if(p3 == HIGH)
    {
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }

    else
    {
      digitalWrite(led3,HIGH);
      digitalWrite(led4,HIGH);
    }

    if(p4 == HIGH)
    {
      digitalWrite(led4,LOW);
    }
  
    else
    {
      digitalWrite(led4,HIGH);
    }
  } 
}
