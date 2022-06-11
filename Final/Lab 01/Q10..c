#include<stdio.h>
int main()
{
   int a[5];
   int t,o,sum1=0,sum2=0,sub=0;
   int *p1;
   int *p2;

   printf("\n5 integer values:");
   for(t=0;t<5;t++)
      scanf("%d",&a[t]);

  p1 = a;

   for(t=0;t<5;t++)
   {
      sum1 = sum1 + *p1;
      p1++;
   }
   int arr[4];
     int *tr;

   printf("\n4 integer values:");
   for(o=0;o<4;o++)
      scanf("%d",&arr[o]);

   p2 = a;

   for(o=0;o<4;o++)
   {
      sum2 = sum2 + *p2;
      p2++;
   }
sub=sum1-sum2;
   printf("\nThe output is: %d - %d = %d",sum1,sum2,sub);
}
