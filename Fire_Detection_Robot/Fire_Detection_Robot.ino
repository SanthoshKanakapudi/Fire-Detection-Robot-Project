#define dW digitalWrite
int lf = 2, lb = 7, rf = 4, rb = 12;
static float dis=0;
unsigned long startTime = 0;
unsigned long endTime = 0;
int ena = 5, enb = 6;
int Buzzer = 8;
int m1speed = 220;
int flame = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(lf, OUTPUT);
  pinMode(lb, OUTPUT);
  pinMode(rf, OUTPUT);
  pinMode(rb, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(flame, INPUT);
  pinMode(Buzzer, OUTPUT);
  dW(Buzzer, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int f = digitalRead(flame);
  if (f == 0)
  {
    dW(Buzzer, HIGH);
    Serial.println(f);
    Serial.println("Fire Detected!");
    delay(100);
  }
  else if (f == 1) {
    dW(Buzzer, LOW);
  }

  if (Serial.available() > 0)
  {
    char k = Serial.read();
    if (k == 'F' || k == '1')
    {
      dW(lf, HIGH);
      dW(rf, HIGH);
      dW(lb, LOW);
      dW(rb, LOW);
      dW(ena, m1speed);
      dW(enb, m1speed);
      dW(ena, m1speed);
      dW(enb, m1speed);
      Serial.println("Forward");
    }
    else if (k == 'B' || k == '2')
    {
      dW(lf, LOW);
      dW(rf, LOW);
      dW(lb, HIGH);
      dW(rb, HIGH);
      Serial.println("Backward");
    }
    else if (k == 'S')
    {
      dW(lf, LOW);
      dW(rf, LOW);
      dW(lb, LOW);
      dW(rb, LOW);

      Serial.println("Stop");
    }
    else if (k == 'L' || k == '3')
    {
      dW(lf, HIGH);
      dW(rf, LOW);
      dW(lb, LOW);
      dW(rb, HIGH);
      dW(ena, m1speed);
      dW(enb, m1speed);
      Serial.println("Take Right");
    }
    else if (k == 'R' || k == '4')
    {
      dW(lf, LOW);
      dW(rf, HIGH);
      dW(lb, HIGH);
      dW(rb, LOW);
      dW(ena, m1speed);
      dW(enb, m1speed);
      Serial.println("Take Left");
    }
    else if (k == NULL)
    {
      dW(lf, LOW);
      dW(rf, LOW);
      dW(lb, LOW);
      dW(rb, LOW);

      Serial.println("Stop");
    }
    else if (k == 'V')
    {
      dW(Buzzer, HIGH);
    }
    else if (k == 'v')
    {
      dW(Buzzer, LOW);
    }
  }
}
