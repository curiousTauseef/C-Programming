#include <stdio.h>
#include <ctype.h>

int main()
{
   int i = 0;
   char c;
   c = 'A';
   c = tolower(c);
   char str[] = "TUTORIALS POINT";

   while( str[i] )
   {
      putchar(tolower(str[i]));
      i++;
   }

   putchar(c);

   return(0);
}
