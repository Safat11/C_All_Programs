#include <stdio.h>
#include <stdlib.h>
int find_Num(int *num)
{
    if(*num%2==0)
        {
    printf("\n%d is an even number",*num);
        }else
        {
            printf("\n%d is an odd number",*num);
        }
}
int main()
{
    int num;
    int *ptr1;

    scanf("%d",&num);
    ptr1=&num;
    find_Num(ptr1);
    return 0;
}

