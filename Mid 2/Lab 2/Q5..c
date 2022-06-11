#include<stdio.h>
int lS(int a[], int l, int n, int k)
{
  if(n<l)
    {
      return -1;
    }
  if(a[l]==k)
    {
      return l;
    }
  if(a[n]==k)
    {
      return n;
    }
   return lS(a,l+1,n-1,k);
}
int main()
{
    int a[100],n,key, sub = -1, i;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
        }
    printf("\nEnter search key: ");
    scanf("%d",&key);
    sub = lS(a,0,n,key);
if(sub != -1)
    {
      printf("%d is found at subscript %d\n",key,sub);
    }
else
    {
     printf("%d is not found!\n",key);
    }
}
