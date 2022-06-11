// LCM Formula : a*b/GCD(a,b)

#include<stdio.h>
int gcd(int n1, int n2)
{
    if(n2==0)
        return n1;
    return gcd(n2,n1%n2);
}
int lcm(int n1, int n2)
{
    return (n1*n2)/gcd(n1,n2);
}
int main()
{
    int n1,n2;
    printf("Enter the Two Number:\n");
    scanf("%d%d",&n1,&n2);
    printf("Lcm of Given Number is:%d",lcm(n1,n2));
}
