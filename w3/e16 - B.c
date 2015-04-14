/* Name : Won Seob Seo Student No: 1403724 Exercise no. 16
 a program that reads user input character string to array. Print the characters as characters and their ASCII codes. */

#include <stdio.h>

int main(void)
{
    puts("Enter a line of text:");
    char c;
    ch_array[]=scanf("%[^\n]s", ch_array);

    scanf("%[^\n]s", ch_array);

    puts("\nThe line entered was:");
    printf("%s\n", ch_array);

/*
    int i=0;
    while(ch_array[i] != '\n') {
        i++;
    }

    int cnt;
    for (cnt=0; cnt<i; cnt++)
    {
        printf("%c in ASCII CODE is %d\n", ch_array[cnt], ch_array[cnt]);
    }
*/
    return 0;
}
