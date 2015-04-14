/* Name : Won Seob Seo Student No: 1403724 Exercise no. 7
 a program that reads user input character string to array. Print the characters as characters and their
ASCII codes. */

#include <stdio.h>

int main(void)
{
    char ch_array[] = "Hello, world";
    int i;
    for(i = 0; ch_array[ i ] != '\0'; i++);
    printf("String %s length is %d\n", ch_array, i);
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
