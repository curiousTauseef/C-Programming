/* Name : Won Seob Seo Student No: 1403724 Exercise no. 11
This program reads user input and tells which of the characters were letters (a-z, A-Z). Use
getchar(). */

#include <stdio.h>

int main(void)
{
	int cha, initial=0;
    printf("This program reads your input and tells which of the characters were letters (a-z, A-Z)\n");
    printf("Use End of File (control Z) to end the program\n");
    while ((cha=getchar()) != EOF) {
        if ((cha >= 'a' && cha <= 'z') || (cha >= 'A' && cha <= 'Z')) {
            if (initial == 0) { // Printing out result message for the first time only
                printf("In your input, the letters were: ");
                initial++;
            }
            putchar(cha);
        } else if (cha == '\n') {
            putchar(cha);
            initial=0;
        }
        /* if (cha >= 'a' && cha <= 'z') {
            printf("You typed lowercase letter\n");
        } else if (cha >= 'A' && cha <= 'Z') {
            printf("You typed UPPERCASE letter\n");
        } else if (cha == '\n') {
            printf("\n");
        } else {
            printf("You did not typed an English alphabet\n");
        }
        */
    }
    printf("\n");
    return 0;
}

