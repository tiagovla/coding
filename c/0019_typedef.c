#include <stdio.h>

typedef struct{
    int age;
    char name[40];
} human;


int main(){
    human h1 = {10, "Rob"};
    human h2 = {.age = 12, .name = "Dave"};
    human h3;
    h3 = (human){14, "Lilly"};

    printf("%s - %d",h1.name, h1.age);

    return 0;
}
