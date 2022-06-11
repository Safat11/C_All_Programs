
#include<stdio.h>

#include<stdlib.h>

int printArray(int a[][3]);    //function prototype

int main()
{

    int array1[2][3] = {{1, 2, 3},{4, 5, 6}};
    int array2[2][3] = {1, 2, 3, 4, 5};
    int array3[2][3] = {{1, 2},{4}};

    printf("Values in array1 by row are: \n");
    printArray(array1);  //function call

    printf("Values in array2 by row are: \n");
    printArray(array2);

    printf("Values in array3 by row are: \n");
    printArray(array3);

}

int printArray(int a[][3])
{
     srand(time(0));

    for(int i=0; i<=1; i++)    //loop through rows
    {
        for(int j=0; j<=2; j++)     //output column values
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n\n");
    }
}
