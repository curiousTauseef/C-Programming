/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 26
A program that asks user to input two strings and saves them to a file. After reading the 1st string
program must tell how long the given string was and ask for the next. The second sting length must match
to the 1st. After the strings are given program will compare the strings and tell which characters were the
same and print these characters as well as their indexes in the array. */

#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    char input1[MAX], input2[MAX];
    int i;
    printf("Input a string: ");
    fgets(input1, MAX, stdin);
    printf("String is: %d characters long\n", strlen(input)-1);
    printf("Input another string that has the same length(%d) as before\n", strlen(input)-1);
    do
    fgets(input2, MAX, stdin);

    printf("%s\n", input);
    return 0;
}
