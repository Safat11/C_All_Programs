//- use parameter
/*
- function declaration or prototype (use parameter) ;

int main()
{
- function calling ;
}
- function header or definition (use parameter)
    {
        printf();
    }

*/

#include<stdio.h>
void square(int y);     // y is a parameter (without value)
int main()
{
    int x;
    for(x=1; x<=10; x++)
    {
        square(x);
    }
}

void square(int y)      // y is an argument (with value)
{
    printf("%d ",y*y);
}
