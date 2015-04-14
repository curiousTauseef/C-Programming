/* Name : Won Seob Seo Student No: 1403724 Exercise no. 4
a program that calculated are of two squares (A and B). After this the program will tell how many
squares B can fit in square A. Print the result of the calculations to the screen. */

#include <stdio.h>

int main(void)
{ 
	// store the lengths of a side of 2 squares in 2 int variables, 
	int sideA, sideB;
	sideA=10, sideB=5;
	// to see how many sqare Bs can fit in square A, divide As area by Bs area and then store it in fitNumber
	// area for square is just side times itself
	double fitNumber=(sideA*sideA)/(sideB*sideB);
	printf("The length of a side of the square A:%2d \n", sideA);
	printf("The length of a side of the square B:%2d \n", sideB);
	printf("The number of square Bs that fits square A is %.0f \n", fitNumber);
	return 0;
}
