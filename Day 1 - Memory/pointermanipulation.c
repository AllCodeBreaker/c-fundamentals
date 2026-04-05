#include <stdio.h>


int main(){
    int age = 20;
    int* p = &age;

    printf("Before Modification\n");
    printf("Value of age: %d\nAddress of age: %p\n", age, &age);
    printf("Value of pointer: %p\nAddress of pointer: %p\n", p, &p);

    *p = 80;

    printf("\nAfter Modification\n");
    printf("Value of age: %d\nAddress of age: %p\n", age, &age);
    printf("Value of pointer: %p\nAddress of pointer: %p\n", p, &p);

    return 0;
}