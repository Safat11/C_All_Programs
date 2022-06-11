#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d",&marks);

    if(marks<0 || marks>100)

        printf("Wrong Entry");

    else if(marks>=97 && marks<=100)         // && - And Operator

        printf("Grade A+");

    else if(marks>=90 && marks<97)

        printf("Grade A");

    else if(marks>=87 && marks<90)

        printf("Grade A-");

    else if(marks>=83 && marks<87)

        printf("Grade B+");

    else if(marks>=80 && marks<83)

        printf("Grade B");

    else if(marks>=77 && marks<80)

        printf("Grade B-");

    else if(marks>=73 && marks<77)

        printf("Grade C+");

    else if(marks>=70 && marks<73)

        printf("Grade C+");

    else if(marks>=67 && marks<70)

        printf("Grade C-");

    else if(marks>=63 && marks<67)

        printf("Grade D+");

    else if(marks>=60 && marks<63)

        printf("Grade D");

    else if (marks<60)

        printf("Grade F");


}
