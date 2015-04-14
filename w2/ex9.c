/* Name : Won Seob Seo Student No: 1403724 Exercise no. 9
a program that asks user to input his/her age. If the input age is under 18 program prints ”You’re too
young to drive”. If age is 18 or above, but below 65 program will print “You’re old enough to get a drivers
license”. If age is 65 or above, program will print that “You’re likely to be retired”. */

#include <stdio.h>

int main(void)
{
    // Declare variables
    int age;
	// ask age
	printf ("Type your age\n");
	scanf("%d", &age);
	if(age<18)
    {
        printf ("You are too young to drive\n");
	} else if (age>=18 && age<65)
	{
        printf ("You are old enough to get a drivers license\n");
	}
    else
    {
		printf ("You are likely to be retired\n");
	}
	return 0;
}
