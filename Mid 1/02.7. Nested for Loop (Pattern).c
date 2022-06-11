#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter number of row : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)       // row
    {

        for(col=1; col<=row; col++)     // column

        //printf("*");
        //printf("%d ",row);      // // row - (Same Value)
        printf("%d ",col);        // // column - (Different Value)

        printf("\n");

    }
    getch();
}
