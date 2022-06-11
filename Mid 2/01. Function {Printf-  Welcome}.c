/*
#include<stdio.h>
- function declaration or prototype ;

int main()
{
- function calling ;
}
- function header or definition
    {
        statement ;
        printf();
    }

*/

#include<stdio.h>
void f()             // function header or definition // function declaration or prototype
{
    printf("Welcome \n");
}
int main()
{
    f();            // function calling
    f();            // function calling
    f();            // function calling
    f();            // function calling
    f();            // function calling

    getch();
}
