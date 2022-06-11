#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 7
int main()
{
    int f[SIZE] = {0};
    int face;     // value 1 to 6
    int roll;     // roll counter 1 to 6000

    srand(time(0));     //(GMT)- random number generator

    for(roll=1; roll<=6000; roll++)
    {
        face = 1+ rand()%6;
        f[face]++;    //replaces switch-case line

    }
    printf("%s %17s\n","Face" ,"Frequency");

    for(face=1; face< SIZE; face++)

    {
        printf("%4d %15d\n", face , f[face]);
    }
}

