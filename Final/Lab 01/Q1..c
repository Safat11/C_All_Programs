#include <stdio.h>
int main()
{
   int first, second, *x, *y, sum;

   printf("Enter two integers: \n");
   scanf("%d%d", &first, &second);

   x = &first;
   y = &second;

   sum = *x + *y;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
