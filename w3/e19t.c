#include <stdio.h>

int main(){
    int numint, i, temp, changed;
    printf("How many integers do you want to sort? Type the number\n");
    scanf("%d", &numint);
    int nums[numint];
    printf("give us some integer numbers. maximum number of integers are %d. \nPress enter after each value.\n", numint);
    for(i=0; i<numint; i++) {
        //fflush(stdin);
        scanf("%d", &nums[i]);
    }

   do {
        changed=0;
        for (i=0; i<(numint-1); i++)
        if (nums[i]>nums[i+1]) {
            temp=nums[i+1];
            nums[i+1]=nums[i];
            nums[i]=temp;
            changed++;
        }
    } while (changed > 0);

    printf("\nafter sorting the numbers are\n");

    for(i=0; i<numint;i++)
    {
        printf("%d\n", nums[i]);
    }

    return 0;
}

//10 20 10 11 500

//20 10 11 500 11

