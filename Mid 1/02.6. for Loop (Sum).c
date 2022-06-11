// Odd , Even count (sum):

#include<stdio.h>
int main()

{
    int i,sum=0;

    for(i=2; i<=20; i=i+2)                     // i++ (1 count)  ;  i=i+2 (2 count)
    {

        printf("%d ",i);

        sum = sum+i;
    }

    printf("\nsum= %d",sum);

    getch();
}
