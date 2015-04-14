/* Name : Won Seob Seo Student No: 1403724 Exercise no. 16
 a program that reads user input character string to array. Print the characters as characters and their ASCII codes. */

#include <stdio.h>

int main(void)
{
    char c, ch_array[80];
    int i=0;

    puts("Enter a line of text:");
    while ( ( c = getchar() ) != '\n')
    {
        ch_array[i++] = c;
    }

    ch_array[i] = '\0'; // insert null at the end of the string
    puts("\nThe line entered was:");
    printf("%s\n\n", ch_array);

    int cnt;
    for (cnt=0; cnt<i; cnt++)
    {
        printf("%c in ASCII CODE is %d\n", ch_array[cnt], ch_array[cnt]);
    }

    return 0;
}

/*
int main(void)
{
    int cha, count=-1;
    printf("Give us string, maximum 30 characters : ");
	while (cha = getchar()!= '\n') {
        count++
        char str[count] ;

	}

	for(i=0; i<)
	printf("\nThe smaller between two numbers is %d\n", smaller(e, f));
	printf("The larger between two numbers is %d\n", larger(e, f));
	return 0;
}
*/
