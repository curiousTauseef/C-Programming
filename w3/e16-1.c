/* Name : Won Seob Seo Student No: 1403724 Exercise no. 16
 a program that reads user input character string to array. Print the characters as characters and their ASCII codes. */

#include <stdio.h>

int main(void)
{
    char c;

    puts("Enter a line of text:");
    char ch_array[]=scanf("%s", &ch_array);

    puts("\n The line entered was:");
    printf("%s\n\n",ch_array);

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
