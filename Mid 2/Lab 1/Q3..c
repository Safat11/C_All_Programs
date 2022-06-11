#include<stdio.h>
int sum(int num)
{
    if(num)
        return(num+sum(num-1));

    else
        return 0;
}

int main()
{
    int count;
    scanf("%d",&count);

    printf("Sum of 1st %d  natural number is %d\n",count,sum(count));
}

