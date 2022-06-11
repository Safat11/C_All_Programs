#include<stdio.h>
int main()
{
    int i,high=0,low=99999,a;

    while(a!=-1)
    {
        scanf("%d",&a);
        if(a>high && a!=-1)
        {
            high=a;
        }
        if(a<low && a!=-1)
        {
            low=a;
        }
    }
    printf("%d",high-low);
    return 0;
}
