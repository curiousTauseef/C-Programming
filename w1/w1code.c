ex 1.
/* Name : Won Seob Seo Student No: 1403724 Exercise no. 1 
a program that prints ”I am in classroom [Classroom name] programming!”
*/
#include <stdio.h>

int main(void)
{ 
	printf("I am in classroom ETYB302 programming!\n");
	return 0;
}

/* Name : Won Seob Seo Student No: 1403724 Exercise no. 2
a program that prints out date and temperature for today and tomorrow (see forecast for the
temperatures). Print 1st day’s information on the 1st line and 2nd day’s information on the next line. */
#include <stdio.h>

int main(void)
{ 
	// store 2 days temperatures in 2 variables, respectively
	int todayTemp, tmrwTemp;
    todayTemp=-4, tmrwTemp=-3;
	printf("Today’s date:21.1.2015, Temperature:%d Celcius degree\n", todayTemp);
	printf("Tomorrow’s date:22.1.2015, Temperature:%d Celcius degree\n", tmrwTemp);
	return 0;
}

/* Name : Won Seob Seo Student No: 1403724 Exercise no. 3
a program that calculates area of square (side x side) and prints the result to the screen. */

#include <stdio.h>

int main(void)
{ 
	// store the length of a side of a square in int variable
	int side;
    side=5;
	printf("The length of a side of the square:%d cm \n", side);
	printf("the area of square:%d cm^2 \n", side*side);
	return 0;
}

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