#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter Two Values: ");
    scanf("%d %d", &x, &y) ;

    if(x>0&&y>0)        // +,+

        printf("First Quadran");

    else if (x<0&&y>0)   // -,+

        printf("Second Quadran");

    else if (x<0&&y<0)      // -,-

        printf("Third Quadran");

    else if (x>0&&y<0)      // +,-

        printf("Fourth Quadran");

    else if(x==0 && y==0)
        printf("Origin");

    return 0;

}

