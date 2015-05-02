#include <stdio.h>

void print_reverse(char *s);

int main()
{
    char str[80];
    puts("Input to print reverse: ");
    scanf("%79s", str);
    print_reverse(str);
}

void print_reverse(char *s)
{
    size_t len = strlen(s);
    printf("The length of the string '%s' is %i\n", s, len);
    char *t = s + len - 1;
    while ( t >= s ) {
        printf("%c", *t);
        t--;
    }
    printf("\n");
}
