//- Not use any parameter
/*
- function declaration or prototype () ;

int main()
{
- function calling ;
}
- function header or definition ()
    {
        printf();
    }

*/

#include<stdio.h>
void square();        // function declaration or prototype
int main()
{
    square();       // function calling
}
void square()      // function header or definition
{
    int x;
    for(x=1; x<=10; x++)
    {
        printf("%d ", x*x);
    }
}







//2nd Method//

/*
#include<stdio.h>
void square()
{
    int x;
    for(x=1; x<=10; x++)
    {
        printf("%d ",x*x);
    }
}
int main()
{
    square();
}
*/



