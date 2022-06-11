#include <stdio.h>

int f(int *a, int n )
{
     int i, Result = 0;
     for(i = 0; i < n; i++)
	 {
      Result = Result ^ a[i];
	  }
     return Result;
}

int main()
{
    int i;
 int a1[] = {8, 3, 8, 5, 4, 3, 4, 3, 5};

    int ctr = sizeof(a1)/sizeof(a1[0]);
    printf("The given array is :  ");

	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", a1[i]);
    }
    printf("\n");

 printf("Number of odd number occur(s) : %d times.\n", f(a1, ctr));
 return 0;
}
