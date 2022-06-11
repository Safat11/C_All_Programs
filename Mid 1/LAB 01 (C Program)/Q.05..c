#include <stdio.h>
int main()
{
    int i,j,k=1;

    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%d ",k++);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
