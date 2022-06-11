#include <stdio.h>

int main()
{
   int arr1[100],i,n,p,v;


    scanf("%d", &n);

       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
   printf("Input the value to be inserted : ");
   scanf("%d",&v);
   printf("The exist array list is :\n");
   for(i=0;i<n;i++)
      printf("% 5d",arr1[i]);

   for(i=0;i<n;i++)
   {

    if(v<arr1[i])
     {
       p = i;
       break;
     }
     else
     {
     	p=i+1;
      }
	 }

   for(i=n+1;i>=p;i--)
      arr1[i]= arr1[i-1];

      arr1[p]=v;
      printf("\n\nAfter Insert the list is :\n");
   for(i=0;i<=n;i++)
      printf("% 5d",arr1[i]);
	  printf("\n");
}
