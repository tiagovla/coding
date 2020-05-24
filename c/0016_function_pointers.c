#include <stdio.h>

void say_something(int);

int main(){
    void (*funprt)(int);
    funprt = say_something;
    funprt(5);

    return 0;
}

void say_something (int ntimes){
    int k;
    for(k=0; k<ntimes; k++)
        printf("Something!\n");
}
