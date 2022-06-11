// Write a program in Fibonacci numbers:  0 1 1 2 3 5 8 13 21

/*
- 1st 0 1 Fixed Number, Then Loop start 2++
-Fibonacci Formula: a[i-1] + a[i-2];
*/

#include<stdio.h>
int main()
{
    int a[100],n, i;

    printf("How many Fibonacci numbers: ");
    scanf("%d",&n);

    a[0]=0;     // initialize 0 & 1 Fixed Digit
    a[1]=1;

    for(i=2; i<n; i++)  // Formula : Loop start 2++
    {
        a[i] = a[i-1] + a[i-2];
    }

    printf("\n");

    for(i=0; i<n; i++)  //printing Fibonacci
        printf("%d\t",a[i]);


    getch();
}

