#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "Hello \"AA\"  world";
    char string1[] = "Hello\' AA world";
    char string2[] = "Hello\\AA world";

    for(int i = 0; i < sizeof(string)/sizeof(char); i++)
    printf("%c", string[i]);
    printf("\n%ld", strlen(string));

    printf("\n");

    for(int i = 0; i < sizeof(string1)/sizeof(char); i++)
    printf("%c", string1[i]);
    printf("\n%ld", strlen(string1));

    printf("\n");

    for(int i = 0; i < sizeof(string2)/sizeof(char); i++)
    printf("%c", string2[i]);
    printf("\n%ld", strlen(string2));

    // concatanate String : strcat(str1, str2); printf("%s", str1);
    // Copy String : strcpy(str1, str2); printf("s", str1);
    // compare String : printf("%d", strcmp(str1, str2)); return 0 => equal, else => not equal

    char name[100];
    printf("\nType your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nHello %s", name);
    return 0;
}