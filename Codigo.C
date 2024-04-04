#include <stdio.h>

  typedef union {
    float FloatVar;
    unsigned char bytes[4];
  } FloatBytes;

  int main (void){
    FloatBytes var;
    var.FloatVar = 0.5;
    for (int i = 0; i < 4; i++) {
      printf("0x%x\n", var.bytes[i]);
    }
  }
