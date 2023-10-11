#include <stdio.h>

typedef enum {
    low = 25,
    medium,
    high

}Level;

int main()
{
    Level item = medium;
    printf("%d\n", item);

    return 0;
}