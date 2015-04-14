/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 24
Fetch file ”exe24.txt” from tuubi. Write a program, that converts the text string in file to readable text.
Characters are normal ASCII characters. (Hint: look for character patters such as newline characters,
exclamations marks, question marks etc.) */

#include <stdio.h>


int main(void)
{
    char c;
    FILE *fp;

    fp = fopen("exe24.txt", "r");
    if(fp == NULL)
    {
      perror("Error in opening file");
      return(-1);
    }

    do
    {
        c = fgetc(fp);
        if( feof(fp) )
        {
            break ;
        }
        printf("%c", c - ('$'-' ')); // I assumed '$' is ' '
    }while(1);

    fclose(fp);
    return 0;
}
