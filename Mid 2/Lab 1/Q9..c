// GCD Formula : GCD(N2, N1%N2);

#include <stdio.h>
int gcd(int num1, int num2)
{
    if(num1%num2 == 0)
        return num2;
        else
            return gcd(num2,num1%num2);
}
int main()
{
    int num1, num2;
    printf("Enter your number = ");
    scanf("%d" ,&num1);
    printf("Enter your number = ");
    scanf("%d" ,&num2);
    printf("GCD = %d" ,gcd(num1,num2));
}
