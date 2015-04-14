/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 23
a program that reads the file contents and tells how many
lowercase letters, uppercase letters, spaces and newline characters are included in the file. Also print how
many characters did not fall in the above categories. */

#include <stdio.h>

struct charCounter{
    int lower;
    int upper;
    int space;
    int newLine;
    int etc;
};

int main(void){
	FILE *filepointer;
	char c;
    filepointer = fopen("exe23.txt","r+");
    struct charCounter counter;
    counter.lower=0, counter.upper=0, counter.space=0, counter.newLine=0, counter.etc=0;

	if(filepointer == NULL ) {
		printf("There is no text file(exe23.txt) to count letters!");
		return 1;
	}



	while((c = fgetc(filepointer)) != EOF ) {
		if( c >= 'a' && c <= 'z') counter.lower++;
		else if( c >= 'A' && c <= 'Z') counter.upper++;
		else if( c == ' ' ) counter.space++;
		else if( c == '\n') counter.newLine++;
		else counter.etc++;
	}

	printf("In the exe23.txt, there are ");
	printf("%d lowercase letters, ",counter.lower);
	printf("%d uppercase letters, \n",counter.upper);
	printf("%d spaces, ",counter.space);
	printf("%d new lines and ",counter.newLine);
	printf("%d other characters.\n",counter.etc);

	fclose(filepointer);

	return 0;
}
