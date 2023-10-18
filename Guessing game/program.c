#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Random(int minN, int maxN) {

    srand(time(0));
    return minN + rand() % (maxN + 1 - minN);
}


void Find(int input, int r) {

   int count;

    while (1)
    {
        
        count++;

        printf("\nYour number is: ");
        scanf("%d", &input);

        if(input > r) {
            printf("too big");
        }
        else if(input < r) {
            printf("too small");
        }
        else {
            printf("you win");
            break;
        }
    }

    printf("\nNumber of guesses: %d\n", count - 1);
        
}

void A(int _result, int a, int b)
{
    int count = 0; 
    int guess;

    while (1)
    {
        guess = (int)(b+a)/2;
        count++;
        printf("%d %d %d\n", a , b, guess);
        // sleep(2);

        if(guess > _result) {
            a = a;
            b = guess;
        }
        else if(guess < _result) {
            a = guess;
            b = b;
        }
        else
        break;
    }

    printf(" \nSo lan doan it nhat : %d", count);
    

}

int main()
{
    int min, max;
    printf("[Min, Max]: ");
    scanf("%d %d", &min, &max);

    int r = Random(min, max);
    printf("%d \n",r);
    
    int inp;
    
    Find(inp, r);

    A(r, min, max);
    
    return 0;   
}

