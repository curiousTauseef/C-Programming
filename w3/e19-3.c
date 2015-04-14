// http://www.programmingsimplified.com/c/source-code/c-program-sort-string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char c, input_array[80], output_array[80];
    int i=0; // i counts the number of numbers
    /* Store how many times each numbers (0 to 9)
    appears in input array */
    int num_store[10];

    puts("Enter some numbers(no space or any non-number value should be entered):");
    while ( ( c = getchar() ) != '\n')
    {
        if (c >= '0' && c <= '9') {
            input_array[i++] = c;
        } else {
            printf("Enter only numbers");
            return 0;
        }
        input_array[i] = '\0'; //array terminator
    }

    printf("the numbers before sorted are %s\n\n", input_array);
    int cnt;
    for(cnt = 0 ; input_array[cnt] != '\0' ; cnt++) {
        printf("%c", input_array[cnt]);
    }

    for (cnt = 0; cnt < i; cnt++)
    {
        num_store[input_array[cnt] - '0']++;
    }

   /** Insert numbers 0 to 9 in output array that many number of times as they appear in input array */
    int no, x, t=0;
   for (no = '0'; no <= '9'; no++)
   {
      x = no - '0';

      for (cnt = 0; cnt < num_store[x]; cnt++)
      {
         output_array[t] = no;
         t++;
      }
   }
   output_array[t] = '\0';

   printf("The numbers after sort are %s\n", output_array);

   return 0;
}

