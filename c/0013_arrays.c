#include <stdio.h>

int main(){
    //1D array
    int scores[5] = {1,22,33,42,5};

    int i = 0;
    for(i=0; i<5; i++)
        printf("%d\n", scores[i]);

    //2D array
    int a[2][3] = {
      {3, 2, 6},
      {4, 5, 20}
    };
    printf("Element 3 in row 2 is %d\n", a[1][2]); 
    return 0;
}
