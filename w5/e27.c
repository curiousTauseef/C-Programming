/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 27
A program that reads user input string using fgets() function. After this, program will ask if the user
wants to save the string to file or does the user want to change the string or quit without saving. If user
wants to change the string this must be made possible by asking for the string again. After this, menu will
be printed again printing the choices available. */

// Why do I have to hit return key 2 times, when I choose 2.

#include <stdio.h>
#include <string.h>
#define MAX 50

void printMenu();

int main(void)
{
    char input[MAX], choice, flush;
    FILE *fp;
    printf("Input a string: ");
    fgets(input, MAX, stdin);
    printMenu();

    choice=getchar();
    do
    {
        if (choice == '1')
        {
            fp=fopen("e27save.txt", "w");
            fputs(input, fp);
            fclose(fp);
            break;
        }
        else if (choice == '2')
        {
            while ((flush = getchar()) != '\n' && flush != EOF); // flushing stdin, or use "fflush(stdin);"
            printf("\nInput a string: ");
            fgets(input, MAX, stdin);
            printMenu();
            choice=getchar();
        }
        else if (choice == '3')
        {
            break;
        } else
        {
            printf("Please choose a valid option!\n");
            printMenu();
            choice=getchar();
        }
    } while(1);

    return 0;
}

void printMenu()
{
    printf("1. Save the file, 2. Change the string, 3. Quit without saving: ");
}
