/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 22
a program that reads user input one character at a time and writes them to file one character at a
time. Program will terminate on some specific character that will be printed out to the user. */

#include <stdio.h>

char *input[10];

FILE *filepointer;

int main(void)
{
    puts("Enter user input(one character at a time), End Of File(Ctrl D in Unix-like system, Ctrl Z in windows) will end the program:");
    filepointer = fopen("ex22.txt", "w");
	while(scanf("%s", &input) != EOF){
		if(strlen(input) > 1 ){
			printf("Please input one character at a time \n");
		}	else {
			fprintf(filepointer, "%s", input);
		}
	}
    fclose(filepointer);
}

