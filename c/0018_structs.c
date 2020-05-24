#include <stdio.h>

struct human{
    int age;
    char name[40];
};


int main(){
    struct human h1 = {10, "Rob"};
    struct human h2 = {.age = 12, .name = "Dave"};
    struct human h3;
    h3 = (struct human){14, "Lilly"};

    printf("%s - %d",h1.name, h1.age);

    return 0;
}
