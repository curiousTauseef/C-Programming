#include <stdio.h>

void prtmsg(char msg[]);

int main()
{
    /*printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof("baby")); */
    char string[] = "We are the champion !!!";

    printf("address of string is : %p\n", string);
    printf("size of string : %i bytes\n", sizeof(string));

    prtmsg(string);
    /*
    char c = 'a';
    printf("%c:%p\n", c, &c);
    printf("%i:%i\n", sizeof(c), sizeof(&c));
    char *p = &c;
    printf("%p\n", p);
    *p = 'h';
    printf("char c is %c\n", c);

    int drinks[] = {4, 2, 3};

    printf("3rd order: %i drinks and the address is %p\n", 0[drinks], &0[drinks]); // print 4
    printf("3rd order: %i drinks and the address is %p\n", 1[drinks], &1[drinks]); // print 4
    printf("3rd order: %i drinks and the address is %p\n", 2[drinks], &2[drinks]); // print 4
    /*
    printf("3rd order: %i drinks and the address is %p\n", drinks[0], &drinks[0]); // print 4
    printf("3rd order: %i drinks and the address is %p\n", *drinks, drinks); // print 4
    printf("3rd order: %i drinks and the address is %p\n", drinks[1], &drinks[1]); // print 4
    printf("3rd order: %i drinks and the address is %p\n", *(drinks + 1), drinks + 1); // print 4
    printf("3rd order: %i drinks and the address is %p\n", drinks[2], &drinks[2]); // print 3
    printf("3rd order: %i drinks and the address is %p\n", *(drinks + 2), drinks + 2); // print 3
    printf("3rd order: %i drinks and the address is %p\n", *drinks + 2, drinks + 2); // print 6
    printf("3rd order: %i drinks and the address is %p\n", *(drinks + 2) + 2, drinks + 2); // print 5
    */
}

void prtmsg(char msg[])
{
    printf("message is : %s\n", msg);
    printf("size of message : %i bytes\n", sizeof(msg));
    printf("address of message is : %p\n", msg);
    printf("address of the pointer is : %p\n", &msg);
}
