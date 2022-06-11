#include<stdio.h>
void fibonacciSeries(int *n)
{
   int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
     printf("%d\t", a);
     c = a + b;
     a = b;
     b = c;
   }
}

int main()
{
   int term;
   int *ptr1;
   printf("Enter the term: ");
   scanf("%d", &term);
   ptr1=&term;
   printf("The fibonacci series is: \n");

   fibonacciSeries(*ptr1);

   return 0;
}
