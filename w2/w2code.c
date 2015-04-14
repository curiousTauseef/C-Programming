#include <stdio.h>
int main(void)
{
	int cha;
	while((cha= getchar()) != EOF)
	putchar(cha);
}

/* Name : Won Seob Seo Student No: 1403724 Exercise no. 7
a program that prints numbers 0 – 9 and their square using:*/

#include <stdio.h>

int main(void)
{
	int i;
	printf("Print, 0-9 using a for loop\n");
	for (i=0;i<10;i++) {
		printf ("%d\n", i);
	}
	printf("Print, 0-9 using a while loop\n");
	i=0;
	while (i<10) {
		printf ("%d\n", i);
		i++;
	}
    printf("Print, 0-9 using a do-while loop\n");
	i=0;
	do {
		printf ("%d\n", i);
		i++;
	} while(i<10);
	return 0;
}

int main(void)
{
    // Declare variables
    int age, currentYear;
	// ask age and current year
	printf ("Type your age\n");
	scanf("%d", &age);
	printf ("Type current year in four digit numbers\n");
	scanf("%d", &currentYear);
	printf ("You are born in %d\n", currentYear-age);
	return 0;
}

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


/* Name : Won Seob Seo Student No: 1403724 Exercise no. 10
Write a program that reads a string of characters user inputs and removes all whitespace characters and
prints the string back without the whitespace characters. Use getchar(). */

#include <stdio.h>

int main(void)
{
	int cha, whitespace;
	whitespace = ' ';
	if (cha!=whitespace) {
	putchar(cha);
	}
}


/* Name : Won Seob Seo Student No: 1403724 Exercise no. 5
a program that converts feet (ft) to meters (m). Give result with precision of 2 numbers after the
decimal marker. */

#include <stdio.h>

int main(void)
{
	// make variables for feet, and feet to Meter Ratio
	double feet, ftMeterRatio;
    feet=10, ftMeterRatio=30.48/100;
	//  print the conversion of feet to meters, with precision of 2 numbers after the decimal marker.
	printf("1 feet is %.4f meter \n", ftMeterRatio);
	printf("As that being said, %.0f feet is %.2f meters\n", feet, feet*ftMeterRatio);
	return 0;
}

/* Name : Won Seob Seo Student No: 1403724 Exercise no. 6
a program that calculates volume of a ball in meters (using approximate value for pi).
Then the program will tell how many liters of water can be fit inside the ball and how many US gallons of water this
is with maximum accuracy that I can achieve */

#include <stdio.h>

int main(void)
{
	// Volume of a sphere is (3*pi*radius^3)/4
	// make variables for pi, radius in meter, volume of a sphere, liters(1/1000 of cubic meters) in the volume, US gallons(3.785 liters) in the volume
	double pi=3.141592653589793238462643, rad=1, volume=(3*pi*rad*rad*rad)/4, liters = volume*1000, gallons = liters / 3.785;
	// print all the values(volume, liter, gallon)
	printf("The volume of a ball with radius %.0f meter(s) is %f cubic meters. And that is %f in liters and %f in gallons\n", rad, volume, liters, gallons);
	return 0;
}
