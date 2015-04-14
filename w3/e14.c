/* Name : Won Seob Seo Student No: 1403724 Exercise no. 7
a program that passes two int type numbers to a function as parameters and returns their sum. */

#include <stdio.h>

int sum(int a, int b);

int main(void)
{
    int e, f;
	printf("Give us 2 integer separated by space : ");
	scanf("%d %d", &e, &f);
	printf("The sum of the two numbers is %d", sum(e, f));
	return 0;
}

int sum(int a, int b)
{
    int s = a + b;
    return s;
}
