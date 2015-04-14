// http://www.programmingsimplified.com/c/source-code/c-program-sort-string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char num, input[100], output[100];
   int numstore[10] = {0}, n, c, t, x;

   printf("Enter some number\n");
   scanf("%s", input);

    n=0;


    while (input[n] != '\0') {
        n++; // counting string length
    }

   //n = strlen(input);

   /** Store how many times numbers (0 to 9)
      appears in input array */

   for (c = 0; c < n; c++)
   {
      num = input[c] - '0';
      numstore[num]++;
   }

   t = 0;

   /** Insert numbers 0 to 9 in output
       that many number of times as they appear
       in input string */

   for (num = '0'; num <= '9'; num++)
   {
      x = num - '0';

      for (c = 0; c < numstore[x]; c++)
      {
         output[t] = num;
         t++;
      }
   }
   output[t] = '\0';

   printf("%s\n", output);

   return 0;
}
