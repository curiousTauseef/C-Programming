/* Name : Won Seob Seo Student No: 1403724 Exercise no. 13
Write a program that prints a menu where you have 4 selections. By selecting option 1 program will ask for
temperature ranges lowest value, highest value and step size. By option 2 program will print user defined
temperature range conversion Celsius <-> Farenheit. By selecting option 3 program will print temperature
range conversion Celsius<->Kelvin. By selecting option 4 program will terminate. Menu needs to be
reprinted after option 1, 2 and 3. */

#include <stdio.h>

int main(void)
{
	int option=0;
	double celsiusLow=0, celsiusHigh=0, stepSize=0, celsTemp=0;
    while (option != 4) {
    printf("Select options from 1 to 4\n");
    printf("#1: Enter ranges lowest value, highest value and step size.\n");
    printf("#2: Conversion Celsius <-> Farenheit.\n");
    printf("#3: Conversion Celsius<->Kelvin.\n");
    printf("#4: Terminate the program.\n");
    scanf("%d", &option);
    if (option == 1) {
        printf("Enter lowest value in Celcius\n");
        scanf("%lf", &celsiusLow);
        printf("Enter higest value in Celcius\n");
        scanf("%lf", &celsiusHigh);
        printf("Enter step size\n");
        scanf("%lf", &stepSize);
    } else if (option == 2) { celsTemp=celsiusLow;
        while (celsiusLow < celsiusHigh) {
        printf("%4.2f Celsius in Farenheit is %4.2f\n", celsiusLow, celsiusLow * 9 / 5 + 32 );
        celsiusLow = celsiusLow + stepSize;
        }
        celsiusLow = celsTemp;
        printf("%4.2f Celsius in Farenheit is %4.2f\n", celsiusHigh, celsiusHigh * 9 / 5 + 32 );
    }else if (option == 3) { celsTemp=celsiusLow;
        while (celsiusLow < celsiusHigh) {
        printf("%4.2f Celsius in Kelvin is %4.2f\n", celsiusLow, celsiusLow + 273);
        celsiusLow = celsiusLow + stepSize;
        }
        celsiusLow = celsTemp;
        printf("%4.2f Celsius in Kelvin is %4.2f\n", celsiusHigh, celsiusHigh + 273);
    } else if (option == 4) {
        return 0;
    } else {
        printf("Please select from 1 to 4.\n");
    }
    }
    return 0;
}
