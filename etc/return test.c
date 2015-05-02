#include<stdio.h>
#include<stdlib.h>

int printfewlines();
int returntest(int i);

int main()
{
    int i, j=0;
    printfewlines();
    printf("1. print from the main functions\n");
    printfewlines();
    printf("2. print from the main functions\n");
    puts("input something\n");
    scanf("%i", &i);
    j = returntest(i);
    printf("100 times of input is %d", j);

}

int printfewlines()
{
    printf("print before return\n");
    return 1;
    printf("print after return\n");
}

int returntest(int i)
{
    if (i > 10)
    {
        printf("you input a big num!\n");
        return 100 * i;
    }
    printf("bye bye!");
    return 0;
}
