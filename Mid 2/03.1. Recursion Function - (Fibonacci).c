/*
// The Fibonacci series : 0,1,1,2,3,5,8,13,21............
- Begins with 0 and 1

- use 2 variable

-Can we defined recursively as follows:
. fibonacci(0) = 0
.  fibonacci(1)= 1

-Formula: f(n)= f(n-1)+f(n-2)           // f() - fibonacci
*/

#include<stdio.h>
int f(int n);
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d",&number);

    int result = f(number);     // Fibonacci value for number input by user

    printf("Fibonacci(%d) = %d\n",number,result);
}

// Recursive definition:
int f(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        return f(n-1) + f(n-2);
    }
}

