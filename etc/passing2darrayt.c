/* Include files */

#include <stdio.h>
#include <stdlib.h> // The stdlib .h header defines four variable types, several macros and various
                    // functions for performing general functions.
#include <ctype.h>  // The ctype.h header file of the C Standard Library provides
                    // declares several functions useful for testing and mapping characters.
#include <time.h> // The time.h header defines four variable types, two macro and various functions
                  // for manipulating date and time.

#define numRows 3
#define numCols 7
#define TotalNum (numRows*numCols)

int arr[numRows][numCols] = {{0,1,2,3,4,5,6}, {7,8,9,10,11,12,13},{14,15,16,17,18,19,20}};

void display(int (*p)[][int cols])
{
   size_t i, j;

   printf("sizeof array=%d\n", sizeof *p);
   printf("sizeof array[]=%d\n", sizeof **p);
   printf("sizeof array[][]=%d\n", sizeof ***p);

   size_t dim_y = sizeof *p / sizeof **p;
   printf("dim_y = %d\n", dim_y);

   size_t dim_x = sizeof **p / sizeof ***p;
   printf("dim_x = %d\n", dim_x);

   for(i=0; i<dim_y; i++) {
      puts("");
      for(j=0; j<dim_x; j++)
         printf(" %10d", (*p)[i][j]);
   }
}

int main() {
    display(arr);
}
