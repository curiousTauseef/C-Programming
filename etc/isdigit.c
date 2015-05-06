#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main()
{
    int i;
    char str[]="is str";
    char num[]="is 333";
    int len_str = strlen(str);
    int len_num = strlen(num);

    for (i = 0; i < len_str ; i++) {
        if(isdigit(str[i])) {
            printf("%c is digit.\n", str[i]);
        } else if(!isdigit(str[i])) {
            printf("%c is not digit.\n", str[i]);
        }
    }

    for (i = 0; i < len_str ; i++) {
        if(isdigit(num[i])) {
            printf("%c is digit.\n", num[i]);
        } else if(!isdigit(num[i])) {
            printf("%c is not digit.\n", num[i]);
        }
    }

        for (i = 0; i < len_str ; i++) {
        if(isalpha(str[i])) {
            printf("%c is alpha.\n", str[i]);
        } else if(!isalpha(str[i])) {
            printf("%c is not alpha.\n", str[i]);
        }
    }

    for (i = 0; i < len_str ; i++) {
        if(isalpha(num[i])) {
            printf("%c is alpha.\n", num[i]);
        } else if(!isalpha(num[i])) {
            printf("%c is not alpha.\n", num[i]);
        }
    }

    // test if they are numbers
    /*
    if(isdigit(str)) {
        printf("%s is digit.\n", str);
    } else if(!isdigit(str)) {
        printf("%s is not digit.\n", str);
    }

    if(isdigit(num)) {
        printf("%s is digit.\n", num);
    } else if(!isdigit(num)) {
        printf("%s is not digit.\n", num);
    }

    // test if they are alpha

    if(isalpha(str)) {
        printf("%s is alpha.\n", str);
    } else if(!isalpha(str)) {
        printf("%s is not alpha.\n", str);
    }

    if(isalpha(num)) {
        printf("%s is alpha.\n", num);
    } else if(!isalpha(num)) {
        printf("%s is not alpha.\n", num);
    }
    */
}
