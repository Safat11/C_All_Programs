#include<stdio.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);

    while(n%2==0)
    {
        k++;
        n /= 2;
    }
    printf("%d",k);
    return 0;
}
