#include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;
    const int* ptr = &i;
    printf("ptr: %d\n", *ptr);

    return 0;
}
