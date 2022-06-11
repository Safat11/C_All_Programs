// Random Number generation (count): part-1:
/*
//- Function : rand()

- #include<stdlib.h>

* use the modulus operator (%) with rand. Example,
- rand() % 6;
Produces numbers in the range 0 to 5
This is called scaling, 6 is the scaling factor.

Shifting can move the range to 1 to 6
- 1 + rand() % 6;
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    for(i=1; i<=20; i++)
    {
    printf("%5d", 1+rand()%6);

    if(i%5 == 0)
    {
        printf("\n");
    }
    }
}

