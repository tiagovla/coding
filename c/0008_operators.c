#include <stdio.h>

int main(){
  int a = 10;
  int b = 3;

  printf("%d\n", a*b);
  printf("%d\n", a/b);
  printf("%d\n", a%b);

  float c = (float) a+2*b;
  printf("%f\n", c);

  return 0;
}
