// write a program that read N numbers and display their sum & average:

#include<stdio.h>
int main()
{
    int a[100], sum=0, i, N;

    printf("How many numbers: ");
    scanf("%d",&N);     //array_size[5];

    printf("Enter your Numbers: ");
    for(i=0; i<N; i++)      //scanf("%d %d %d %d %d,&a[0],&a[1],&a[2],&a[3],&a[4]);
    {
        scanf("%d",&a[i]);

    }

    for(i=0; i<N; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is = %d\n",sum);
    printf("The average is = %.2f",(float)sum/N);
}

/*Basic
#include<stdio.h>
int main()
{
    int a[5]={1,2,4,8,5} ,sum=0;

    for(int i=0; i<5; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is = %d\n",sum);
    printf("The average is = %.2f",(float)sum/5);
}
*/
