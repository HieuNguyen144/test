#include <stdio.h>
#include <string.h>

typedef struct  
{
    int ID;
    char* dob;
    char* name;
}student;
student Arr[100];

void Add()
{
    int k = 0;
    k++;
    for(int i = 0; i < k; i++) {
        printf("\nStudent ID: ");
        scanf("%d", &Arr[i].ID);
        printf("\nDate Of Birth: ");
        scanf("%s", Arr[i].dob);
        printf("\nFull Name: ");
        scanf("%s", Arr[i].name);
    }
    
}
void PrinAll()
{
    for(int i = 0; i < 100; i++) {
        printf("\nStudent ID: %ls", &Arr[i].ID);
        printf("\nDate Of Birth: %s", Arr[i].dob);
        printf("\nFull Name: %s", Arr[i].name);
    }
}
void Delete()
{

}

void menu()
{

    printf("\n1. Add\n");
    printf("2. Print ALL\n");
    printf("3. Delete with id\n");
    printf("0. Exit\n");

    int inp;
    printf("\nYour choose is: ");
    scanf("%d", &inp);
    
    switch (inp)
    {
    case 1:
        Add();
        return menu();
        break;
    case 2:
        PrinAll();
        return menu();
        break;
    case 3:
        Delete();
        return menu();
        break;
    
    default:

        break;
    }
    
}
int main()
{
    int k = 0;

    menu();
    printf("Exit.");
    return 0;
}