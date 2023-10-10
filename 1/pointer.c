#include <stdio.h>

int main()
{
    int age = 49;
    int* ptr = &age;

    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    
    return 0;
}