#include <stdio.h>
#include <stdlib.h>

int Random(int minN, int maxN);
void Input(int input);
void Find(int input, int r);

int main()
{
    int min, max;
    printf("[Min, Max]: ");
    scanf("%d %d", &min, &max);

    int r = Random(min, max);
    printf("%d \n",r);
    
    int inp;
    //Input (inp);
    printf("\nYour number is: ");
    scanf("%d", &inp);
    //if(inp < r) printf("too small");
    //if(inp > r) printf("too big");
    //if(inp == r) printf("you win");
    
    Find(inp, r);
    
    
    return 0;   

}

int Random(int minN, int maxN) {

    return minN + rand() % (maxN + 1 - minN);
}
/*
void Input(int input) {

    printf("\nYour number is: ");
    scanf("%d", &input);
    
} 
*/
void Find(int input, int r) {

        if(input > r) {
            printf("too big");
        }
        if(input < r) {
            printf("too small");
            
        }
        if(input == r) {
            printf("you win");
        }
}
