#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d",&marks);

    if(marks<0 || marks>100)
        printf("Wrong Entry");

    else if(marks>=91 && marks<=100)

        printf("A+");

    else if(marks>=81 && marks<=90)

        printf("A");

    else if(marks>=71 && marks<=80)

        printf("B");

    else if(marks>=61 && marks<=70)

        printf("C");

    else if(marks>=0 && marks<=60)

        printf("Fail");

    getch();

}
