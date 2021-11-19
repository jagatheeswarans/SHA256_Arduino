#include "SHA256.h"

SHA_256 hash;
void setup() {
  String Data = "Hello World!" ;
  Serial.begin(115200);
  Serial.println();
  
  Serial.print ("Data needs to be hashed ...");
  Serial.println();
  Serial.print (Data);
  Serial.println();
  String Hashed_Output = hash.Hash(Data);
  Serial.print("Hashed_Output");
  Serial.println(Hashed_Output);
  }

void loop() {
  // put your main code here, to run repeatedly:

}
