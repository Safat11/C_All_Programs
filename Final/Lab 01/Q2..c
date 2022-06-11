#include <stdio.h>
int increment(int *var)
{
    int result = *var + 1;
    return result;
}

int main()
{
   int num1,num2;
   int *ptr1, *ptr2;

   scanf("%d",&num1);

   ptr1=&num1;
   ptr2=&num2;
   num2 = increment(ptr1);
   printf("num1 value is: %d", *ptr1);
   printf("\nnum2 value is: %d", *ptr2);

   return 0;
}
