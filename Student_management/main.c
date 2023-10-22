#include <stdio.h>
#include <string.h>


typedef struct
{
    int ID;
    char dob[100];
    char name[100];
} student;
student Arr[100];

void Add()
{
    for (int i = 0; i < 1; i++)
    {
        printf("\nStudent ID: ");
        scanf("%d", &Arr[i].ID);
        // printf("%d", Arr[i].ID);
        printf("\nDate Of Birth: ");
        scanf("%s", Arr[i].dob);
        // fgets(Arr[i].dob, sizeof(Arr[i].dob), stdin);
        printf("%s", Arr[i].dob);
        // puts(Arr[i].dob);
        printf("\nFull Name: ");
        fgets(Arr[i].name,100, stdin);
        //puts(Arr[i].name);
        printf("%s", Arr[i].name);
    }
}
void PrinAll()
{
    for (int i = 0; i < 1; i++)
    {
        printf("\nStudent ID: %d", Arr[i].ID);
        printf("\nDate Of Birth: %s", Arr[i].dob);
        // printf("\nFull Name: %s", Arr[i].name);
        puts(Arr[i].name);
    }
}
void Delete()
{
}

void menu()
{
    while (1)
    {
        printf("\n1. Add\n");
        printf("2. Print ALL\n");
        printf("3. Delete with id\n");
        printf("0. Exit\n");

        int inp;
        printf("\nYour choice is: ");
        scanf("%d", &inp);

        switch (inp)
        {
        case 1:
            Add();
            break;

        case 2:
            PrinAll();
            break;

        case 3:
            Delete();
            break;

        default:
            return;
        }
    }
}
int main()
{
    menu();

    printf("Exit.");
    return 0;
}