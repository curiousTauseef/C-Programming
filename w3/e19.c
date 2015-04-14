/* Name : Won Seob Seo Student No: 1403724 Exercise no. 19
a program that reads user input numbers to array. After numbers are in array program will sort them
in to the array from smallest to largest.*/

#include <stdio.h>

//numsort(char ch[]);

int main(void)
{
    char c, ch_array[80];
    int i=0;
    puts("Enter some numbers:");
    while ( ( c = getchar() ) != '\n')
    {
        if (c >= '0' && c <= '9') {
            ch_array[i++] = c;
        } else {
            printf("Enter only numbers");
            return 0;
        }
        ch_array[i] = '\0';
    }

    printf("the numbers before sorted are %s\n\n", ch_array);
    int cnt;
    for(cnt = 0 ; ch_array[cnt] != '\0' ; cnt++) {
        printf("%c",ch_array[cnt]);
    }

    int changed; //counter for how many times the numbers were sorted
    char temp;

    do {
        changed=0;
        int a;
        for (a=0; a<i; a++)
        {
            if (ch_array[a] > ch_array[a+1])
            {
                temp=ch_array[a];
                ch_array[a] = ch_array[a+1];
                ch_array[a+1] = temp;
                changed++;
            }
        }
    } while (changed > 0);

    printf("\n\n the numbers after sorted are ");

    for(cnt = 0 ; ch_array[cnt] != '\0' ; cnt++) {
        printf("%c", ch_array[cnt]);
    }
    return 0;
}
