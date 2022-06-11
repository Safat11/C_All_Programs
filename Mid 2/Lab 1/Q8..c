#include<stdio.h>
void num(int n)
{
     if (n< 0)
     {
       n *= -1;
       printf("-  ");
     }
     if (n > 10)
     {
        num(n/ 10);
        printf("  ");
     }

     printf("%d", n % 10);
}
int main()
{
    int a;

    scanf("%d",&a);

    num(a);

    return 0;
}
