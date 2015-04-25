/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 28
Write function app, that takes two * char (s1 and s2) pointers and one int as parameters. (s1 is array size,
meaning the location where the pointer points). s2 is appended to the end of s1. If the result is too long,
overflown characters are truncated.
char s1[40];
char s2[40];
//s1 =”123”, s2=”abc”
app(s1,s2,40); // s1 = ”123abc”
// s1 =”012345678901234567890123456789012345”, s2 = “abcdefghijklmn”;
app(s1, s2, 40); // s1 = “012345678901234567890123456789012345abc” */

#include <stdio.h>
#include <string.h>
#define MAX 150


void app(char *s1, char *s2, int length);

int main(void)
{
    char input[2][MAX];
    int i, len=0;
    printf("Input string 1: ");
    fgets(input[0], MAX, stdin);
    printf("Input string 2: ");
    fgets(input[1], MAX, stdin);
    printf("The program will add the two strings for you, but please set the maximum length. \n");
    printf("The program will truncate extra characters.");
    do
    {
        printf("Set the maximum length(should be positive integer): ");
        scanf("%d,", &len);
    } while (len <= 0);

    i=0; // reset index

    app(input[0], input[1], len);

    return 0;
}

void app(char *s1, char *s2, int length)
{
    int i = 0;
    char result[2*MAX];
    while (s1[i] != '\0') // Putting the first string in the result
    {
        result[i] = s1[i];
        i++;
    }

    i=0; // reset index

    while (s2[i] != '\0') // APPENDING the second string in the result
    {
        result[i + strlen(s1) - 1] = s2[i]; // -1 because of new line character
        result[i + strlen(s1)] = '\0';
        i++;
    }

    result[length]='\0';// Truncate overflown characters

    printf("String1: %sString2: %sMaximum characters after appending:%d\n", s1, s2, length);
    printf("Result: %s\n", result);
}
