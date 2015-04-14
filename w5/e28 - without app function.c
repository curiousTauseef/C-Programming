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

int main(void)
{
    char input[2][MAX], result[2*MAX];
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

    while (input[0][i] != '\0') // Putting the first string in the result
    {
        result[i] = input[0][i];
        i++;
    }

    i=0; // reset index

    while (input[1][i] != '\0') // APPENDING the second string in the result
    {
        result[i + strlen(input[0]) - 1] = input[1][i]; // -1 because of new line character
        i++;
    }

    result[len]='\0';// Truncate overflown characters

    printf("printing in the main function! \nstring1: %sstring2: %s%d\n", input[0], input[1], len);
    printf("printing result! \n%s\n", result);

    return 0;
}
