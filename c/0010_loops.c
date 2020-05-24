#include <stdio.h>

int main(){

    int count = 1;
    //while loop
    while(count <= 5){
        printf("Count = %d\n", count);
        count++;
    }

    //do_while loop
    count = 1;
    do{
        printf("Count = %d\n", count);
        count++;
    }while(count <= 5);

    //for loop
    int x;
    for(x=1; x<=5; x++)
        printf("Count = %d\n", x);


  return 0;
}
