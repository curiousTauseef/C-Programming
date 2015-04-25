/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 26
A program that asks user to input two strings and saves them to a file. After reading the 1st string
program must tell how long the given string was and ask for the next. The second sting length must match
to the 1st. After the strings are given program will compare the strings and tell which characters were the
same and print these characters as well as their indexes in the array. */

#include <stdio.h>
#include <string.h>
#define MAX 50

int main(void)
{
    char input1[MAX], input2[MAX];
    int i, j;
    FILE* fp;
    fp = fopen("inputfrome26.txt","w+");

    printf("Input a string: ");
    fgets(input1, MAX, stdin);
    printf("String is: %d characters long\n", strlen(input1)-1);
    printf("Input another string that has the same length(%d) as before\n", strlen(input1)-1);
    do
    {
        fgets(input2, MAX, stdin);
        if (strlen(input1) == strlen(input2))
        {
            break;
        }
        printf("You should input a string that is %d characters long\n", strlen(input1)-1);
        printf("Input a string: ");
    } while(1);

    for (i=0; i<strlen(input1)-1 ; i++)
    {
        for (j=0; j <strlen(input1)-1 ; j++)
        {
            if (input1[i] == input2[j])
            {
                printf("The character %c was in both the string.(Index %d in the 1st one, Index %d in the second one\n", input1[i], i, j);
            }
        }
    }

    fputs(input1,fp);
    fputs(input2,fp);
    fclose(fp);

    return 0;
}
