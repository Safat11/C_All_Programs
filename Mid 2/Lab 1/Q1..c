#include<stdio.h>
int Count(int a,int b);
int main()
{
    int x,y,counter=0;
    scanf("%d%d",&x,&y);
    counter = Count(x,y);
    printf("\ndivisible by 5 and 7 between the range of %d-%d: %d\n",x,y,counter);
}
int Count(int a,int b)
{
    int i,c=0;
    for(i=a; i<=b; i++)
    {
        if(i%5==0 && i%7==0)
        {
            c+=1;
        }
    }
    return c;
}
