#include<stdio.h>
int n(int a);
int main()
{
int x;

   scanf("%d",&x);
   n(x);
   return 0;
}
int n(int a)
  {
    if(a==0)
    return 0;
 else
    printf("\nHello World\n"); n(a-1);
  }
