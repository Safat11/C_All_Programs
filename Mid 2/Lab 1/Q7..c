#include<stdio.h>
int integerPower(int base, int exponent)
{
    int r=1;
    while(exponent!=0)
    {
        r = r * base;
        exponent--;
    }
    return r;
}

int main()
{
    int a,b;
    printf("Input base: ");
    scanf("%d",&a);
    printf("Input exponent: ");
    scanf("%d",&b);

    if(b>0)
    {
        printf("%d",integerPower(a,b));
    }
    else
        printf("ERROR!!");

    return 0;
}


