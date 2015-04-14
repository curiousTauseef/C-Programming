/* Name : Won Seob Seo Student No: 1403724 Exercise no. 7
a program that prints numbers 0 – 9 and their square using:*/

#include <stdio.h>

int main(void)
{
	int i;
	printf("Print, 0-9 using a for loop\n");
	for (i=0;i<10;i++) {
		printf ("%d and its square is %d\n", i, i*i);
	}
	printf("Print, 0-9 using a while loop\n");
	i=0;
	while (i<10) {
		printf ("%d and its square is %d\n", i, i*i);
		i++;
	}
    printf("Print, 0-9 using a do-while loop\n");
	i=0;
	do {
		printf ("%d and its square is %d\n", i, i*i);
		i++;
	} while(i<10);
	return 0;
}
