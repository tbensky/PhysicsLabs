#define PIN 3

int count;

void setup() 
{
  pinMode(PIN,INPUT);
  attachInterrupt(digitalPinToInterrupt(PIN), edge_here, RISING);
  Serial.begin(9600);
}

void edge_here()
{
  count++;
}

void loop() 
{
  long t0;

  t0 = millis();
  count = 0;
  while(millis() - t0 < 100);
  Serial.println(count);
}
