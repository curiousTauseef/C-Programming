/* Name : Won Seob Seo Student No: 1403724 Exercise no. 7
a program that reads user input one character at a time and writes them to file one character at a
time. Program will terminate on some specific character that will be printed out to the user. */

#include <stdio.h>

int i, nameLength, numLength;
char c, name[30], stnum[30], *message;

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

    FILE *filepointer;
    filepointer = fopen("c:\\testi\\test.txt", "w+");

    message="Your name: \0";

    for (i=0; message[i] != '\0'; i++) {
        fputc(message[i], filepointer);
    }

    for (i=0; name[i] != '\0'; i++) {
        fputc(name[i], filepointer);
    }

    message="\nStudent Number: \0";

    for (i=0; message[i] != '\0'; i++) {
        fputc(message[i], filepointer);
    }

    fputc("", filepointer);

    for (i=0; stnum[i] != '\0'; i++) {
        fputc(stnum[i], filepointer);
    }

    fclose(filepointer);
}
