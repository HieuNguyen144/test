#include <stdio.h>
#include <string.h>

void MyName();

void Function1();

int sum(int k); // recursion function (đệ quy)

int main() {

    MyName("Hieu", 21);
    MyName("Trung", 18);

    char numbers[] = {1, 2, 3, 4, 5};
    
    Function1(numbers);

    int resuilt = sum (10);
    printf("%d \n", resuilt);

    return 0;
}

void MyName( char name[], int age) 
{
    printf("My name is %s and i'm %d years old \n", name, age);
}

void Function1(char numbers[])
{

    for(int i = 0; i < strlen(numbers); i++) {
        printf("%d \n", numbers[i]);
    }
}

int sum(int k) {
    if(k > 0) {
        return  k + sum( k - 1);
    }
    else 
    return 0;
}