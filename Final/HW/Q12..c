#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void permute(char *a, int l, int r)
{
int i;
if (l == r)
	printf("%s\n", a);
else
{
	for (i = l; i <= r; i++)
	{
		swap((a+l), (a+i));
		permute(a, l+1, r);
		swap((a+l), (a+i));
	}
}
}
int main()

{ char a[] = "ABC";
permute(a, 0, 2);
getchar();
 return 0;
}
