/* Name : Won Seob Seo Student No: 1403724 Exercise no. 17
a program that reads user input character string to array. After this program will tell how many
characters were lowercase and how many were uppercase characters. Use a function to print out the total
values of characters as passing them to the printing function.*/

#include <stdio.h>

int main(void)
{
    char c, ch_array[80];
    int i=0;
    int lowercaseCnt=0;
    int uppercaseCnt=0;
    puts("Enter a line of text:");
    while ( ( c = getchar() ) != '\n')
    {
        if (c >= 'a' && c <= 'z') {
            lowercaseCnt++;
        } else if (c >= 'A' && c <= 'Z') {
            uppercaseCnt++;
        }
        ch_array[i++] = c;
    }

    ch_array[i] = '\0'; // insert null at the end of the string
    puts("\n The line entered was:");
    printf("%s\n\n",ch_array);


    {
        printf("And among those %d were lowercase and %d were uppercase \n", lowercaseCnt, uppercaseCnt);
    }

    return 0;
}
