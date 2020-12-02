#define PIN 3
#define START 1
#define END 2

#define LEN 100
unsigned int list[LEN];
int count;

int status;
unsigned long edge_time;

void setup() 
{
  pinMode(PIN,INPUT);
  attachInterrupt(digitalPinToInterrupt(PIN), edge_here, RISING);
  status = START;
  count = 0;
  Serial.begin(9600);
}

void edge_here()
{
  if (status == START)
  {
    status = END;
    edge_time = micros();
  }
  else if (status == END)
  {
    status = START;
    if (count < LEN)
    {
      list[count] = micros() - edge_time;
      count++;
    } 
  }
}

void loop() 
{
  int i;
  
  if (count)
  {
    for(i=0;i<count;i++)
      Serial.println(list[i]);
     count = 0;
  }
}
