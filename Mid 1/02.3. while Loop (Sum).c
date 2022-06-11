#include <stdio.h>
int main()
{


    int count=1, sum=0 ;        // initialization

    while (count <= 10)      // while(Condition)
    {
        printf("%d ", count);       // statement

        sum= sum+count;
        count++;                  // increment;
    }

printf("\nTotal sum = %d \n\n\n",sum);

 return 0;
}

