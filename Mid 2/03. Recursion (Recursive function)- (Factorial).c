/*
//-Recursion-(Recursive function): A function that calls itself, either directly(through another function)

if(condition)
    base value;

else
formula;

*/

// Factorial function formula: N!=N*fact(N-1)! :  5*fact(4) = 120

#include<stdio.h>
int fact(int n);        // Function: fact()
int main()
{
        int n;
    // scanf("%d",&n);
    for(n=1; n<=10; n++)
    {
        printf("\nFactorial = %d", fact(n));
    }
}
// Recursion start:

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }


    else
    {
      return n*fact(n-1) ;
    }
}

