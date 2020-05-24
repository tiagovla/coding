#include <stdio.h>

//declaration
int factorial (int);

int main(){
    int x, result;
    x = 5;
    result = factorial(x);
    printf("factorial of %d is %d\n", x, result);
    return 0;
}


int factorial (int n){
    return (n > 1) ? n*factorial(n-1) : 1;
}
