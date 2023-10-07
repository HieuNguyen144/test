#include <stdio.h>

int main()
{
    int i;

    /* for(int i = 0; i < 9; i++)
    {
        if(i == 4)
        continue;

        printf("%d\n", i);
    }
    */

   while (i<10)
   {
    if(i == 4){
        i++;
        continue;
    }

    printf("%d\n", i);
    i++;

   }
   
    return 0;
}