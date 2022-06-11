#include<stdio.h>
int maximum(int *arr, int n)
{
 int i,max;
 max=arr[0];
 for(i=1;i<n;i++)
  if(arr[i]>max)
   max=arr[i];
 return max;
}
int main()
{
 int i,j,*arr,n,max,var;

 printf("enter number of elements in the histogram: ");
 scanf("%d",&n);
 arr= (int*) malloc((sizeof(int)) * n) ;
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);

  max=maximum(arr,n);
  var=max;
 for(j=0;j<var;j++)
 {
  for(i=0;i<n;i++)
   {
     if(arr[i]<max)
      printf(" ");
     else
      printf("#");

      }
   max--;

   printf("\n");
   }

  getch();
 }

