#include <stdio.h>

int main()
{
    char s[] = "How big is it?";
    char *t = s;*
    printf("s = %s\n", s);
    printf("t = %s\n", t);
    printf("%p = %p\n", s, &s);
    printf("%p != %p\n", t, &t);
    printf("size of s = %i\n", sizeof(s));
    printf("size of t = %i\n", sizeof(t));
    //char *cards = "JQK"; // we cannot change this string literal becoz its stored in constant memory block(read-only memory) [pointer]
    char cards[] = "JQK"; // this creates a copy [array] on the stack(not read-only), as well as creating string literal into the read only memory
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    puts(cards);

    t = cards;
    printf("\n%s\n", t);
    // s = t;
    return 0;
}
