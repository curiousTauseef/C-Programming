/* Name : Won Seob Seo Student No: 1403724 Exercise no. 7
 a program that has two functions: smaller and larger. Pass two int parameters to both functions.
Smaller function will return the smaller value of the given two values and the larger will return the larger
value. Print both values in the main program after the function call. */

#include <stdio.h>

int smaller(int a, int b);
int larger(int a, int b);


int main(void)
{
    int e, f;
	printf("Give us 2 integer separated by space : ");
	scanf("%d %d", &e, &f);
	printf("\nThe smaller between two numbers is %d\n", smaller(e, f));
	printf("The larger between two numbers is %d\n", larger(e, f));
	return 0;
}

int smaller(int a, int b)
{
    int small;
    if (a<b) {
        small = a;
    } else {
        small = b;
    }
    return small;
}

int larger(int a, int b)
{
    int larger;
    if (a>b) {
        larger = a;
    } else {
        larger = b;
    }
    return larger;
}
