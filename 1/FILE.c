#include <stdio.h>

int main()
{
    FILE *fptr;

    // create a file
    fptr = fopen("filename.txt", "w"); // file in the desktop

/*  created at the specified location
    fptr = fopen("test:\filename.txt","w");
*/

    // write some text to the file
    fprintf(fptr, "Hello everyone");

    // close file
    fclose(fptr);

    // add content in file
    fptr = fopen("filename.txt", "a");
    fprintf(fptr, "\nHi everybody ");
    fclose(fptr);

    fptr = fopen("filename.txt", "r");
    char MyStrings[100];

    while(fgets(MyStrings, 100, fptr))  // fgets only reads the first line of the file
    {   
        printf("%s", MyStrings);
    }

    fclose(fptr);

    return 0;

}