#include<stdio.h>
int main()
{
    int a[] = {5, 10, 15, 25, 12, 30, 35, 45, 40, 87};

    int value, pos=-1;

    printf("Enter the value you want to search : ");
    scanf("%d",&value);

    for(int i=0; i<11; i++)     //Initialize value of Array
    {
        if(value==a[i])     //Checking/Searching
        {
            pos = i+1;     // Array starting point 0. So, count 0+1
            break;
        }
    }

    if(pos == -1)   // Array starting point 0. So, -1 not count
    {
        printf("The Value is not found");

    }
    else
        printf("The Value is found in position %d",pos);

}

