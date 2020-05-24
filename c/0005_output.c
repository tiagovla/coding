#include <stdio.h>

int main(){
  // char a = getchar();
  // printf("Your input: ");
  // putchar(a);

  // char b[100];
  // gets(b);
  // printf("Your input: ");
  // puts(b);

  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("\nSum: %d", a+b);


  return 0;
}
