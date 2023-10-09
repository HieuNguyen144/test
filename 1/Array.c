#include <stdio.h>
#include <math.h>

int main()
{
    int mynumbers[] = {15, 25, 35, 45, 55};
    mynumbers[0] = 78;

    printf("%d\nAll OF ARRAY", mynumbers[0]);

    for(int i = 0; i < sizeof(mynumbers)/sizeof(int); i++) {
        printf("%d \n", mynumbers[i]);
    }

    int Matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    for(int i = 0 ; i <2; i++) {
        for(int j = 0; j < 3; j ++) {
            printf("element of matrix: %d\n", Matrix[i][j]);
        }
    }
    return 0;
}