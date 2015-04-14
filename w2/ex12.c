/* Name : Won Seob Seo Student No: 1403724 Exercise no. 12
Write a program that reads user input and converts user input characters from lowercase to uppercase. Use
getchar(). */

#include <stdio.h>

int main(void)
{
	int cha;
    printf("This program reads user input and converts user input characters from lowercase to uppercase\n");
    printf("Use End of File (control Z) to end the program\n");
    while(cha != EOF) {
        cha=getchar();
        if (cha >= 'a' && cha <= 'z') {
            putchar(cha-32);
        } else {
            putchar(cha);
            }
        }
    return 0;
}
