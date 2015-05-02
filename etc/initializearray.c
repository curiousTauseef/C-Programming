#include<stdio.h>
#include<stdlib.h>

void printmatrix(char msweep[12][12],int r,char user_chart[12][12]);

int main()
{
    int i, j;
    int array[100] = { [1 ... 99] = 0};
    for (i = 0; i < 100; i++)
    {
        printf("%c", array[i]);
    }

    /*
    int array[15][15];
    for (i = 0; i < 15; i++)
    {
            int array[i] = { [ 1 ... 14 ] = -1 };
    }

    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            printf("%i", array[i][j]);
        }
        printf("\n");
    }
    */

    char msweep[12][12] = {{'0'}};
    char user_chart[12][12] = {{'0'}};
/*
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            msweep[i][j] = '0';
        }
    }
*/
    printmatrix(msweep, 12, user_chart);

}

void printmatrix(char msweep[][12], int r, char user_chart[12][12]) // r is 12
{
    int i,j;
    printf(" ##########\n");
    for(i = 0; i < r; i++)
    {
        printf("#");
        for(j = 0; j<12;j++)
        {
            printf("%c ", user_chart[i][j]);
        }
        printf("#");
        printf("\n");
    }
    printf(" ###########\n\n");
    return;
}
