#include <stdio.h>

int main(){

    int a = 35;
    //if/elseif/if statement
    if(a > 50)
        printf("a > 50\n");
    else if(a > 30)
        printf("30 < a <= 50\n");
    else
        printf("a <= 30\n");

    //thernary if statement
    int b = (a > 10) ? 5 : 2;
    printf("b = %d\n", b);

    //switch statement
    int index = 2;
    switch(index){
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        default:
            printf("Default\n");
        }


  return 0;
}
