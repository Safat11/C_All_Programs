#include <stdio.h>
int conv(int *ptr)
{
	int x;
	if(*ptr==0)
		return 0;
	x=*ptr/2;
	conv(&x);
	printf("%d",*ptr%2);
}
int main()
{
	int num;
	printf("Enter a decimal number: ");
	scanf("%d", &num);
	printf("\nThe binary number is: ");
	conv(&num);
}
