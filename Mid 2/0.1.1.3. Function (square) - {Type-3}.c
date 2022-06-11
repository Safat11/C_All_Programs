//- not used void (use: int , float , char)
//- use parameter
//- return must

/*
- function declaration or prototype (use parameter) ;

int main()
{
- function calling ;
- printf();
}
- function header or definition (use parameter)
    {
        return ;
    }

*/

#include<stdio.h>
int square(int y);

int main()
{
    int x;
    for(x=1; x<=10; x++)
    {
        int a= square(x);
        printf("%d ",a);            //  printf("%d ",square(x));
    }
}
int square(int y)
{
    return y*y;
}
