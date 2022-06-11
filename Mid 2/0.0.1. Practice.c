#include<stdio.h>
int main()
{
   // int a[10] =  {2,4,6,8,10,12,14,16};

   int a[20];

   for(int i=1; i<=50; i++)
   {
       a[i] = 2+2*i ;

      printf("%d    ",a[i]);

   }

    return 0;
}

