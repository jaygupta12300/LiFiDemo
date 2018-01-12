String s;
static int TRESHOLD = 300;
int q=0;
static unsigned int standardDelay = 40000; //1350 is limit
void setup() {
  Serial.begin(9600); // 9600 bits per second
  pinMode(3,OUTPUT); //digital PWM 3 on output
}
void loop() {
  //read every 100ms
  //high A0 value is one, low A0 value is zero
    if(q==0 && analogRead(A0)<TRESHOLD)
    {
      if(Serial.available() > 0) // Don't read unless
        s = Serial.readString();
    }
    else{
      
          for(int i=0 ;i< s.length(); i++)
          {
            WriteChar(s[i]);
            if(analogRead(A0)>TRESHOLD)
            i--;
          }
          q=1;
    }
  //}
}
void WriteChar(char str){
  switch (str - '0'){
    case 49:
      //code for a is 011 0001
      LightFlash(false, true, true, false, false, false, true);
      break;
    case 50:
      //code for b is 011 0010
      LightFlash(false, true, true, false, false, true, false);
      break;
    case 51:
      //code for c is 011 0011
      LightFlash(false, true, true, false, false, true, true);
      break;
    case 52:
      //code for d is 011 0100
      LightFlash(false, true, true, false, true, false, false);
      break;
    case 53:
      //code for e is 011 0101
      LightFlash(false, true, true, false, true, false, true);
      break;
    case 54:
      //code for f is 011 0110
      LightFlash(false, true, true, false, true, true, false);
      break;
    case 55:
      //code for g is 011 0111
      LightFlash(false, true, true, false, true, true, true);
      break;
    case 56:
      //code for h is 011 1000
      LightFlash(false, true, true, true, false, false, false);
      break;
    case 57:
      //code for i is 011 1001
      LightFlash(false, true, true, true, false, false, true);
      break;
    case 58:
      //code for j is 011 1010
      LightFlash(false, true, true, true, false, true, false);
      break;
    case 59:
      //code for k is 011 1011
      LightFlash(false, true, true, true, false, true, true);
      break;
    case 60:
      //code for l is 011 1100
      LightFlash(false, true, true, true, true, false, false);
      break;
    case 61:
      //code for m is 011 1101
      LightFlash(false, true, true, true, true, false, true);
      break;
    case 62:
      //code for n is 011 1110
      LightFlash(false, true, true, true, true, true, false);
      break;
    case 63:
      //code for o is 011 1111
      LightFlash(false, true, true, true, true, true, true);
      break;
    case 64:
      //code for p is 100 0000
      LightFlash(true, false, false, false, false, false, false);
      break;
    case 65:
      //code for q is 100 0001
      LightFlash(true, false, false, false, false, false, true);
      break;
    case 66:
      //code for r is 100 0010
      LightFlash(true, false, false, false, false, true, false);
      break;
    case 67:
      //code for s is 100 0011
      LightFlash(true, false, false, false, false, true, true);
      break;
    case 68:
      //code for t is 100 0100
      LightFlash(true, false, false, false, true, false, false);
      break;
    case 69:
      //code for u is 100 0101
      LightFlash(true, false, false, false, true, false, true);
      break;
    case 70:
      //code for v is 100 0110
      LightFlash(true, false, false, false, true, true, false);
      break;
    case 71:
      //code for w is 100 0111
      LightFlash(true, false, false, false, true, true, true);
      break;
    case 72:
      //code for x is 100 1000
      LightFlash(true, false, false, true, false, false, false);
      break;
    case 73:
      //code for y is 100 1001
      LightFlash(true, false, false, true, false, false, true);
      break;
    case 74:
      //code for z is 100 1010
      LightFlash(true, false, false, true, false, true, false);
      break;
    default:
      Serial.println(str - '0');
      Serial.println("CAME IN DEFAULT IN WRITECHAR");
      break;
  }
}

void LightFlash(boolean a, boolean b, boolean c, boolean d, boolean e, boolean f, boolean g)
{
  digitalWrite(3,LOW);
  if (a == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay);
  //boolean sensorValue1 = (analogRead(A0)>TRESHOLD);
 // delayMicroseconds(standardDelay);

  digitalWrite(3,LOW);
  if (b == true){
    digitalWrite(3,HIGH);
  }
  //delayMicroseconds(standardDelay);
  //boolean sensorValue2 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);

  digitalWrite(3,LOW);
  if (c == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay);
  //boolean sensorValue3 = (analogRead(A0)>TRESHOLD);
  //delayMicroseconds(standardDelay);

  digitalWrite(3,LOW);
  if (d == true){
    digitalWrite(3,HIGH);
  }
  //delayMicroseconds(standardDelay);
  //boolean sensorValue4 = (analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);

  digitalWrite(3,LOW);
  if (e == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay);
 // boolean sensorValue5 = (analogRead(A0)>TRESHOLD);
  //delayMicroseconds(standardDelay);

  digitalWrite(3,LOW);
  if (f == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay);
 // boolean sensorValue6 = (analogRead(A0)>TRESHOLD);
  //delayMicroseconds(standardDelay);

  digitalWrite(3,LOW);
  if (g == true){
    digitalWrite(3,HIGH);
  }
  delayMicroseconds(standardDelay);
//  boolean sensorValue7 = (analogRead(A0)>TRESHOLD);
  //delayMicroseconds(standardDelay);
  delayMicroseconds(3*standardDelay); //1 second passed
}
