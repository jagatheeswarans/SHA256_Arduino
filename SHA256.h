#ifndef SHA256_h
#define SHA256_h
#include "Arduino.h"

  
    class SHA_256 {
    private:
      unsigned long Gets0 (unsigned long wi15Receive);
      unsigned long Gets1 (unsigned long wi2Receive);
      unsigned long GetChoose (unsigned long HashE,unsigned long HashF,unsigned long HashG);
      unsigned long GetMajority (unsigned long HashA,unsigned long HashB,unsigned long HashC);
      unsigned long GetSigma0 (unsigned long InputHash);
      unsigned long GetSigma1 (unsigned long InputHash);  
    
    public:
      String Hash(String InputString);
  };


#endif
