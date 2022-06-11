/* // Sentinel(-1) Controlled Looping:
- Sentinel means that, clicking on a specific digit will turn off the unlimited marks count.
*/

#include<stdio.h>
int main()
{
    int students=0, sum=0, marks;

    printf("Take student marks: ");
    scanf("%d",&marks);

    while(marks !=-1)       // Sentinel(-1) Controlled Looping
    {
        sum= sum+marks;
        students++;

        scanf("%d",&marks);

    }
    printf("Total Sum = %d",sum);
    printf("\nAverage is = %.2f",(float)sum/students);

    getch();
}
