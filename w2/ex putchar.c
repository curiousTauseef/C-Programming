/* Name : Won Seob Seo Student No: 1403724 Exercise no. 10
Write a program that reads a string of characters user inputs and removes all whitespace characters and
prints the string back without the whitespace characters. Use getchar(). */

#include <stdio.h>

int main(void)
{
	int cha;
    printf("This program reads a string of characters user inputs and removes all whitespace characters and prints the string back without the whitespace characters\n");
    printf("Use End of File (control Z) to end the program\n");
    while(cha != EOF) {
        cha=getchar();
        if (cha != ' ') {
            putchar(cha);
        }
    }
    return 0;
}
