#include <stdio.h>

int main()
{
    double sum = (float) 2/5;
    printf("%.2lf\n", sum);
    
    printf("%lu", sizeof(sum));

    return 0;

}