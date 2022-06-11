#include <stdio.h>

int main()
{
// // // Odd and Even:

    int n;
  printf("Enter a number: ");
  scanf("%d",&n);


  if (n%2 == 0)
    printf("Even Number\n");
  else
    printf("Odd Number\n");


// // // Max and Min:

    int a, b, c, max;

    printf("Enter Three Values\n");
    scanf("%d %d %d", &a, &b, &c);

    max=a;

  if(b>max)
  {
      max=b;
  }

  if(c>max)
  {
      max=c;
  }

    printf("Maximum Number is = %d\n", max);

    return 0;
}
