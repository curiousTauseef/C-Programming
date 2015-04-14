#include <stdio.h>

int main(void) {
	int input;
	printf("Input your text ");
	printf("To end the program . Type '.' then Enter ");
	do {
	input = getchar();
	if( input != ' ') putchar(input);
	} while( input != '.' );

	return 0;
}
