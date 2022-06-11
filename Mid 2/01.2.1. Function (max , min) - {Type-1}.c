#include<stdio.h>
#include<math.h>
void max();
void min();

int main()
{
    max();
    min();
}

void max()
{
    int x, y, z;
    printf("Enter Three Values: ");
    scanf("%d %d %d",&x ,&y ,&z);

    int max = x;
    if(y>max)
    {
        max = y;
    }
    if(z>max)
    {
        max = z;
    }
    printf("Maximum = %d",max);
}

void min()
{
    int x, y, z;
    printf("\nEnter Three Values: ");
    scanf("%d %d %d",&x ,&y ,&z);

    int min = x;
    if(y<min)
    {
        min = y;
    }
    if(z<min)
    {
        min = z;
    }
    printf("Minimum = %d",min);
}


