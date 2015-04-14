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
