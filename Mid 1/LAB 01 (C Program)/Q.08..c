#include <stdio.h>
int main()
{
    int n, count=1, sum=0 ;

    scanf("%d",&n);

    while (count <= n)
    {
        printf("%d ", count);

        sum= sum+count;
        count++;
    }

    printf("\nTotal sum = %d ",sum);

    return 0;
}
