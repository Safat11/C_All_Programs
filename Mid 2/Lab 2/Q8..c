#include <stdio.h>

int m2a(int *b, int ba, int *s, int sa)
{
    if(b == 0 || s == 0)
        return;
    int bi = ba-1,
    si = sa-1,
    m = ba + sa -1;
    while(bi >= 0 && si >= 0) {
 if(b[bi] >= s[si]){
            b[m] = b[bi];
            m--;
            bi--;
        } else {
            b[m] = s[si];
            m--;
            si--;
        }
    }
    if(bi < 0)
	{
        while(si >= 0)
		{
            b[m] = s[si];
            m--;
            si--;
  }
    } else if (si < 0)
	{
        while(bi >= 0)
		{
            b[m] = b[bi];
            m--;
            bi--;
        }
    }
}

int main()
{
    int bigArr[13] = {10, 12, 14, 16, 18, 20, 22};
    int smlArr[6] = {11, 13, 15, 17, 19, 21};
    int i;

    printf("The given Large Array is :  ");
	for(i = 0; i < 7; i++)
	{
		printf("%d  ", bigArr[i]);
    }
    printf("\n");

    printf("The given Small Array is :  ");
	for(i = 0; i < 6; i++)
	{
		printf("%d  ", smlArr[i]);
    }
    printf("\n");

   m2a(bigArr, 7, smlArr, 6);
    printf("After merged the new Array is :\n");
    for(i = 0; i<13; i++)
	{
		printf("%d ", bigArr[i]);
    }
    return 0;
}
