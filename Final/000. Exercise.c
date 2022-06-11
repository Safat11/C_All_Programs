
#include<stdio.h>
int fact(int *n);
int main()
{
        int n;
     scanf("%d",&n);

    {

           printf("The Factorial of %d is : %d \n\n",n,fact*(n));

    }
}
// Recursion start:

int fact(int *n)
{
    if(n==0 || n==1)
    {
        return 1;
    }


    else
    {
      return *n*fact(*n-1) ;
    }
}
