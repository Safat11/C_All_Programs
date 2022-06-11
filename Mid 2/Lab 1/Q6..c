#include <stdio.h>
int P(int num, int i);
int main()
{
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = P(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}

int P(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }

    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return P(num, i - 1);
       }
    }
}

