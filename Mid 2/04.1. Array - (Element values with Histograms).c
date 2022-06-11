#include<stdio.h>
#define size 10
int main(void)
{
    int n[size] = {19, 3,5,7,15,6,2,8,10,4};
    int i;  //Array , value
    int j; //histogram bar


    printf("%s%13s%17s\n","Element","Value","Histogram");

    for(i=0; i<size; i++)
    {

        printf("%7d%13d            ",i,n[i]);


        for(j=1; j<=n[i]; j++)      // print one histogram bar
        {
            printf("%c",'*');
        }

        printf("\n");
    }
}

