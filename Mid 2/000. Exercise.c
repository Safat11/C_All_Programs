#include<stdio.h>
int main()

#define n 10
{

    int i, a[n];

    printf("Enter number:");

    for(i=0; i<n ; i++)       // i = 0 1 2 3 4 5  // soja korar jonno
    {
        scanf("%d",&a[i]);         // array's element a[n]= {}


    }


    printf("Reverse number: \n");

    //a[n];
    for(i=n-1; i>=0; i--)                   // i= 5 4 3 2 1 0  ulta korar jonno

    {
        printf("%5d",a[i]);



    }

    return 0;
}
