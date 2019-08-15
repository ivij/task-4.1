void setup() 
{Serial.begin(9600); 
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() 
{int val;
val = analogRead(0); 

  Serial.println(val); 

  if ( val <300 )

  {

    digitalWrite(LED_BUILTIN, HIGH);

  }

  else

  {

    digitalWrite(LED_BUILTIN, LOW);

  }

}
