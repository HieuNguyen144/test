#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    int age;
} myprof;

int main()
{
    myprof A = {"Hieu", 13};
    
    printf("%s %d\n", A.name, A.age);

    myprof B;
    B = A;

    strcpy(A.name, "Trung");
    A.age = 21;

    printf("%s %d\n", A.name, A.age);
    printf("%s %d\n", B.name, B.age);

    myprof C;
    C = A;

    return 0;
}