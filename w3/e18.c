/* Name : Won Seob Seo Student No: 1403724 Exercise no. 18
a program that reads user input character string to array. Program will then convert lowercase
characters to uppercase and uppercase to lowercase.*/

#include <stdio.h>

int main(void)
{
    char c, ch_array[80];
    int i=0;

    puts("Enter a line of text:");
    while ( ( c = getchar() ) != '\n')
    {
        if (c >= 'a' && c <= 'z') {
            c=c-32;
        } else if (c >= 'A' && c <= 'Z') {
            c=c+32;
        }
        ch_array[i++] = c;
    }

    ch_array[i] = '\0'; // insert null at the end of the string
    puts("\n The uppercase and lowercase are reversed:");
    printf("%s\n",ch_array);

    return 0;
}
