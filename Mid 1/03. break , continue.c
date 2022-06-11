#include<stdio.h>
int main()
{
    //break;

    int i;
    for(i=1; i<=20; i++)
    {
        if(i==7)
        break;

        printf("%d ",i);
    }
printf("\n");

    //continue;

    int j;
    for(j=1; j<=10; j++)
    {
        if((j==3)||(j==6)||(j==9))
            continue;

        printf("%d ",j);
    }

    getch();
}
