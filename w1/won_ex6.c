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
