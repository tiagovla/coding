#include <stdio.h>

//declaration
int square (int);

int main(){
    int x, result;

    x = 3;
    result = square(x);
    printf("%d squared is %d\n", x, result);

  return 0;
}


int square (int x){
    return x*x;
}
