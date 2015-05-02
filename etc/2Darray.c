#include <stdio.h>
#include <stdlib.h>

#define numRows 3
#define numCols 7
#define TotalNum (numRows*numCols)


void display(int (*twodarr)[7])
{
    int i, j;
    printf("\n");
    for (i = 0; i< numRows;i++)
    {
        for (j = 0;j< numCols;j++)
        {
            printf("%i\t",twodarr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[numRows][numCols] = {{0,1,2,3,4,5,6}, {7,8,9,10,11,12,13},{14,15,16,17,18,19,20}};
    display(arr);
}
