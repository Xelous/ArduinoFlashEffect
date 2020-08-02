long longDelay;
long flashCount;
long shortDelay;
long shorterDelay;

void setup() 
{
  pinMode(13, OUTPUT);
  randomSeed(42);
}

void loop() 
{
  delay(2000);
  
  while(true)
  {
    flashCount = random(2,5);
    while(flashCount > 0)
    {
      // Flash Effect
      shortDelay = random(20,72);
      shorterDelay = shortDelay - 10;

      digitalWrite(13, HIGH);
      delay(shortDelay);
      digitalWrite(14, LOW);
      delay(shorterDelay);      

      // End Flash Effect
      
      --flashCount;
    }
    


    longDelay = random(500,2000);
    delay(longDelay);    
  }  
}