#include<stdio.h>
int main()
{
    char ch;
    int total=0;
    while(ch!='X')
    {
        scanf("%c",&ch);
        if(ch!='x')
        {
            if(ch=='R')
            {
                total -= 8;
            }
            else if(ch=='U')
            {
                total -= 3;
            }
            else if(ch=='L')
            {
                total += 10;
            }
            else if(ch=='D')
            {
                total += 5;
            }
        }
    }
    printf("%d$",total);
    return 0;
}
