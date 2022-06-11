#include<stdio.h>
int main()
{
    int a[20];
    int i,j, count =0;
    printf("Give 20 numbers between 10 to 100: ");
    for(i=0; i<20; i++)
    {
        scanf("%d",&a[i]);

       if(a[i]<10 || a[i]>100)
       {
           printf("give number between 10 to 100 only. \n");
           i++;
       }
    }
    printf("Given numbers after duplicate elimination are: ");
    for(i=0; i<20; i++)
    {
        for(j=0; j<i; j++)
        {
            if(a[i] == a[j])
                break;
        }
         if(i==j)
         {
             printf("%d\n",a[i]);
             count++;
         }
    }
   if(count ==20)
   {
       printf("All elements are different.\n");
   }
}
