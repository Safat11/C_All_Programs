#include <stdio.h>
int multiplyNum(int *a, int *b)
{
int result= *a * *b;

return result;
}
int main()
{
    int num1,num2;
    int *ptr1,*ptr2;
    int mul;

    scanf("%d",&num1);

    scanf("%d",&num2);
    ptr1=&num1;
    ptr2=&num2;
    mul=multiplyNum(ptr1,ptr2);
    printf("Product of the two integer values is: %d",mul);
    return 0;
}
