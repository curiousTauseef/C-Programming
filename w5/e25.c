/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 25
A program, that reads user input string to an array using fgets() function. After this, program will print
string length and the string itself. */

#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    char input[MAX];
    int i;
    printf("Input a string: ");
    fgets(input, MAX, stdin);
    printf("String is: %d characters long\n", strlen(input)-1);
    printf("%s\n", input);
    return 0;
}
