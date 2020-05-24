#include <stdio.h>

void swap(int*, int*);
int add_up (int*, int);


int main(){
    int a, b;

    printf("Address of a is: %x\n", &a);
    printf("Address of b is: %x\n\n", &b);

    int j = 42;
    int *p = NULL;
    p = &j;
    printf("Address of j is: %x\n", p);
    printf("Value of j is: %d\n\n", *p);

    int arr[5] = {2,3,5,22,42};
    int *ptr = arr;
    int i;

    for (i=0; i<5; i++)
        printf("%d\n", *(ptr+i));

    a = 2;
    b = 3;
    swap(&a, &b);
    printf("\na=%d b=%d\n", a, b);

    int orders[5] = {1, 4, 5, 3 ,2};
    printf("\nsum of orders = %d\n",add_up(orders,5));

    return 0;
}

void swap(int* num1, int* num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int add_up (int *a, int num_elements) {
  int total = 0;
  int k;

  for (k = 0; k < num_elements; a++, k++)
    total += *a;

  return (total);
}
