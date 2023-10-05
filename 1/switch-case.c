#include <stdio.h>

int main()
{
    int day;
    scanf("hom nay la ngay: %d", &day);

    int n = day%7;

    switch (n)
    {
    case 1:
        printf("Today is Monday");
        break;
    case 2:
        printf("Today is Tuesday");
        break;
    case 3:
        printf("Today is Wedesday");
        break;
    case 4:
        printf("Today is Thusday");
        break;
    case 5:
        printf("Today is Friday");
        break;
    case 6:
        printf("Today is Saturday");
        break;
    case 7:
        printf("Today is Sunday");
        break;
    
    default:
        
    }

return 0;

}