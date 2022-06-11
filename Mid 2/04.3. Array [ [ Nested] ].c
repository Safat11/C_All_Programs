#include<stdio.h>
#define respone 40   // define array sizes
#define size 11

int main()
{
    int ans;
    int rating;


    int f[size ]={0};
    int r[respone] = {1,5,8,6,7,9,7,1,3,4,7,8,6,10,5,8,10,7,6,9,10,9,2 ,8,5,2,7,9,4,6,2,1,6,8,7,1,4,3,5};

    for(ans=0; ans<respone; ans++)
    {
        ++f[r[ans]];

    }
    printf("%s %15s\n","Rating" ,"Frequency");

    for(rating=1; rating<size ; rating++)
    {
        printf("%5d %15d\n",rating,f[rating]);
    }
}

