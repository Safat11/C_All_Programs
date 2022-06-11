#include<stdio.h>
int main()
{
    int x[5] = {1,5,3,4,5};

    int target,count=0;

    printf("Enter your target number: ");
    scanf("%d",&target);

    printf("%d found in ",target);

    for(int i=0; i<5; i++)      //Initialize value of Array                      /* Linear Search  - Start*/
    {
        if(x[i]==target)      //Value check/search

        {
            printf("x[%d] ",i);    //Print in Searching Initialize value
            count++;
        }
    }                                                                             /* Linear Search  - End*/
    printf("%d location times\n",count); // Print in Counting Position value
}


