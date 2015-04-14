/* Name : Won Seob Seo Student No: 1403724 Exercise no. 21
a program that prints your name and student number to file. the file printing is done by calling a function for the
printing (function needs to be self written). Meaning that in main you call function ”ownFunction” that
does the printing to the file. */

#include <stdio.h>

int i, nameLength, numLength;
char c, name[30], stnum[30], *message, location[40];
void ownFunction(char* name, char* stnum, char* location);

int main(void)
{
    puts("Enter your name :");

    nameLength=0;
    while ( ( c = getchar() ) != '\n')  // receiving name string from user
    {
        name[nameLength++] = c;
    }
    name[nameLength]='\0';

    puts("Enter your student number:");

    numLength=0;
    while ( ( c = getchar() ) != '\n')  // receiving student number string from user
    {
        stnum[numLength++] = c;
    }
    stnum[numLength]='\0';

    printf("Give the file location ex)\"c:\\test\\test.txt\" if you type d, it will go to the default(example) directory.\n");
    scanf("%s", location);

    ownFunction(name, stnum, location); //using ownFunction, put name and stnum to Location

}

void ownFunction(char* name, char* stnum, char* location)
{
    FILE *filepointer;
    if (location[0] == 'd') // checking if its default folder, if it is, open example folder
    {
        filepointer = fopen("c:\\test\\test.txt", "w");
    }

    else {
        filepointer = fopen(location, "w"); // if there was user input, write file there
    }

    message="Your name: ";

    for (i=0; message[i] != '\0'; i++) {
        fputc(message[i], filepointer); // putting message to file
    }

    for (i=0; name[i] != '\0'; i++) {   //printing name to the file
        fputc(name[i], filepointer);
    }

    message="\nStudent Number: ";

    for (i=0; message[i] != '\0'; i++) {
        fputc(message[i], filepointer); //putting message to the file
    }

    for (i=0; stnum[i] != '\0'; i++) {  //putting student number to the file
        fputc(stnum[i], filepointer);
    }
    fclose(filepointer); // close the file
}

