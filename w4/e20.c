/* Name : Won Seob Seo Student No: 1403724 Exercise no. 20
a program that prints your name and student number to file. */

#include <stdio.h>

int i, nameLength, numLength;
char c, name[30], stnum[30], *message, location[40];

int main(void)
{
    puts("Enter your name :");

    nameLength=0;
    while ( ( c = getchar() ) != '\n')
    {
        name[nameLength++] = c;
    }
    name[nameLength]='\0';

    puts("Enter your student number:");

    numLength=0;
    while ( ( c = getchar() ) != '\n')
    {
        stnum[numLength++] = c;
    }
    stnum[numLength]='\0';

    printf("Give the file location ex)\"c:\\test\\test.txt\" if you type d, it will go to the default(example) directory.\n");
    scanf("%s", location);
    FILE *filepointer;
    if (location[0] == 'd')
    {
        filepointer = fopen("c:\\test\\test.txt", "w");
    }

    else {
        filepointer = fopen(location, "w");
    }

    message="Your name: ";

    for (i=0; message[i] != '\0'; i++) {
        fputc(message[i], filepointer);
    }

    for (i=0; name[i] != '\0'; i++) {
        fputc(name[i], filepointer);
    }

    message="\nStudent Number: ";

    for (i=0; message[i] != '\0'; i++) {
        fputc(message[i], filepointer);
    }

    for (i=0; stnum[i] != '\0'; i++) {
        fputc(stnum[i], filepointer);
    }

    fclose(filepointer);
}
