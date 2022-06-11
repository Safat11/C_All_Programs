#include<stdio.h>
#include<math.h>

void max(int x, int y, int z);
void min(int x, int y, int z);


int main()
{
    int num1, num2, num3;
    printf("Enter three values: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    max(num1, num2,num3);
    min(num1, num2,num3);


}

void max(int x, int y, int z)
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

    printf("The Largest Number is = %d \n",max);
}

void min(int x, int y, int z)
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

    printf("The Smallest Number is = %d \n",min);
}


