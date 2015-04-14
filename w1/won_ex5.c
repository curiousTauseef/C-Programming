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
