static int TRESHOLD = 500;
static unsigned int standardDelay = 13500; //1350 is limit
int q=0;;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // 9600 bits per second
  int sensorValue = 0;
  pinMode(3,OUTPUT);
}
void loop() {
  if(q==0)
  {
    digitalWrite(3,HIGH);
    delay(10000);
    q=1;
    digitalWrite(3,LOW);
  }
  else{
  // put your main code here, to run repeatedly:
  delayMicroseconds(standardDelay/2);
  boolean a=(analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);
  //delayMicroseconds(standardDelay/2);
    
  boolean b=(analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);
  //delayMicroseconds(standardDelay/2);
  
  boolean c=(analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);
 // delayMicroseconds(standardDelay/2);
  
  boolean d=(analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);
  //delayMicroseconds(standardDelay/2);
  
  boolean e=(analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);
  //delayMicroseconds(standardDelay/2);
  
  boolean f=(analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);
  //delayMicroseconds(standardDelay/2);
  
  boolean g=(analogRead(A0)>TRESHOLD);
  delayMicroseconds(standardDelay);
  //delayMicroseconds(standardDelay/2);
  
  delayMicroseconds(3*standardDelay); //1 second passed
  long result = 0;
  result = 1000000*a + 100000*b + 10000*c  + 1000*d + 100*e + 10*f + 1*g;
  //Serial.println(result);
  
  long int a1[]={110001,110010,110011,110100,110101,110110,110111,111000,111001,111010,111011,111100,111101,111110,111111,1000000,1000001,1000010,1000011,1000100,1000101,1000110,1000111,1001000,1001001,1001010};
  for(int i=0;i<26;i++)
  {
    digitalWrite(3,LOW);
    if(a1[i]==result)
    {
      PrintChar(result);
      break;
    }
    else
    {
      digitalWrite(3,HIGH); 
    }
  }}
}
void PrintChar(long binary){
  switch (binary){
    case 110001:
      //code for a is 011 0001
      Serial.print("a");
      break;
    case 110010:
      //code for b is 011 0010
      Serial.print("b");
      break;
    case 110011:
      //code for c is 011 0011
      Serial.print("c");
      break;
    case 110100:
      //code for d is 011 0100
      Serial.print("d");
      break;
    case 110101:
      //code for e is 011 0101
      Serial.print("e");
      break;
    case 110110:
      //code for f is 011 0110
      Serial.print("f");
      break;
    case 110111:
      //code for g is 011 0111
      Serial.print("g");
      break;
    case 111000:
      //code for h is 011 1000
      Serial.print("h");
      break;
    case 111001:
      //code for i is 011 1001
      Serial.print("i");
      break;
    case 111010:
      //code for j is 011 1010
      Serial.print("j");
      break;
    case 111011:
      //code for k is 011 1011
      Serial.print("k");
      break;
    case 111100:
      //code for l is 011 1100
      Serial.print("l");
      break;
    case 111101:
      //code for m is 011 1101
      Serial.print("m");
      break;
    case 111110:
      //code for n is 011 1110
      Serial.print("n");
      break;
    case 111111:
      //code for o is 011 1111
      Serial.print("o");
      break;
    case 1000000:
      //code for p is 100 0000
      Serial.print("p");
      break;
    case 1000001:
      //code for q is 100 0001
      Serial.print("q");
      break;
    case 1000010:
      //code for r is 100 0010
      Serial.print("r");
      break;
    case 1000011:
      //code for s is 100 0011
      Serial.print("s");
      break;
    case 1000100:
      //code for t is 100 0100
      Serial.print("t");
      break;
    case 1000101:
      //code for u is 100 0101
      Serial.print("u");
      break;
    case 1000110:
      //code for v is 100 0110
      Serial.print("v");
      break;
    case 1000111:
      //code for w is 100 0111
      Serial.print("w");
      break;
    case 1001000:
      //code for x is 100 1000
      Serial.print("x");
      break;
    case 1001001:
      //code for y is 100 1001
      Serial.print("y");
      break;
    case 1001010:
      //code for z is 100 1010
      Serial.print("z");
      break;
    default:
      Serial.println("");
      break;
  }
}
