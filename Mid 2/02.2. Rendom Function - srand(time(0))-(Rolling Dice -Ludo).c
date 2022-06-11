// part-2.2:

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int side1=0, side2=0, side3=0, side4=0, side5=0, side6=0;
    srand(time(0));
    for(int i=1; i<=6000; i++)
    {
        int a = 1+rand()%6;
        switch(a)
        {
            case 1: printf("one\n");
                    side1++;
                    break;
            case 2: printf("two\n");
                    side2++;
                    break;
            case 3: printf("three\n");
                    side3++;
                    break;
            case 4: printf("four\n");
                    side4++;
                    break;
            case 5: printf("five\n");
                    side5++;
                    break;
            case 6: printf("six\n");
                    side6++;
                    break;
        }
    }
    // printf("One = %d\nTwo = %d\nThree = %d\nFour = %d\nFive = %d\nSix = %d",side1,side2,side3,side4,side5,side6);
    printf("\n");
       printf("%s %15s\n","Face","Frequency");    // %s - "string"
       printf(" 1%15d\n",side1);
       printf(" 2%15d\n",side2);
       printf(" 3%15d\n",side3);
       printf(" 4%15d\n",side4);
       printf(" 5%15d\n",side5);
       printf(" 6%15d\n",side6);
}


