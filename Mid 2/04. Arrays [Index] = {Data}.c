// Arrays []
/*
- Data structures containing related data items of same type
- Character arrays can also represent strings
- consecutive group of memory locations
        . All of which have the same type
-- Index:
- Position number used to refer to a specific location/element/index
        . Place in square brackets []
        - Must be positive integer or integer expression
- First element count 0 to index
- data use in {} bracket

//- If Value is not used in data, then 0 will be counted.
//- Using a loop to initialize the array's location/element/index

//
#define SIZE 5    // SIZE is a variable. So use any name
int n[SIZE];
for(int i=0; i<SIZE; i++)
*/

#include<stdio.h>
int main()
{
    printf("%s %10s\n","Element","Value");

    int n[10];  //Array
    for(int i=0; i<10; i++)
    {
        n[i]=2+2*i;  //Data - 0 to Value change, use formula. as like, x[i]=2+i*i

        printf("%d %15d\n",i,n[i]);
    }
}

