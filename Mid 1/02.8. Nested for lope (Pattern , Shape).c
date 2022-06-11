/*
//Shape : Another loop inside One loop.

Loop 1: number of rows
for(row=1; row<=n; row++)
    {
Loop 2: number of spaces (col<=n-row)
    for(col=1; col <= n-row; col++)

Loop 3: number of stars
    for(col=1; col <= 2*row-1; col++)
    }

*/

#include <stdio.h>
int main()
{
  int row, col, n;

  printf("Enter the number of rows: \n");
  scanf("%d", &n);


    // Upper Part:
  for (row = 1; row <= n; row++)  // Loop to print rows
  {
    for (col = 1; col <= n-row; col++)  // Loop to print spaces in a row
      printf(" ");

    for (col = 1; col <= 2*row - 1; col++) // Loop to print stars in a row
      printf("*");

    printf("\n");
  }


    // Lower Part:
   for(row=n; row>=1; row--)
   {
       for(col=1; col<=n-row; col++)
        printf(" ");

       for(col=1; col<=2*row-1; col++)
        printf("*");

        printf("\n");

   }

  return 0;
}
