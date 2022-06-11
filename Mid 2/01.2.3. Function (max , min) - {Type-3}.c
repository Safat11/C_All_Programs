#include<stdio.h>
#include<math.h>

int max(int x, int y, int z);
int min(int x, int y, int z);


int main()
{
    int num1,num2,num3;
    printf("Enter three values: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    printf("The Largest Number is = %d \n",max(num1,num2,num3));
    printf("The Smallest Number is = %d \n",min(num1,num2,num3));
}

int max(int x, int y, int z)
{

    int max = x;

    if(y>max)
    {
        max = y;
    }

    if(z>max)
    {
         max = z;
    }

    return max;
}

int min(int x, int y, int z)
{

    int min = x;

    if(y<min)
    {
        min = y;
    }

    if(z<min)
    {
         min = z;
    }

    return min;
}



