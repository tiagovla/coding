#include <stdio.h>

#define PI_def 3.14

int main(){
  const double PI_const = 3.14;
  //usage of define and const
  printf("%f", PI_const)
  printf("%f", PI_def); //MACRO - preprocessor

  return 0;
}
