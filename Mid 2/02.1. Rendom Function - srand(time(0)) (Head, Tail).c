// Random Number generation (count): part-2:
/*
#include<stdlib.h> :- srand();
#include<time.h> :- time(0);
int main()
{
    int variable;
    srand(time(0));
    for loop()
    {
        int a = 1+rand%Integer;
        statement()
        {
        }
    }
printf("%d",variable);
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int head=0, tail=0;

    srand(time(0));         // sequence randomize.....time(0)...6:14:16 (GMT)

    for(int i=1; i<=10; i++)
    {
        int a= 1+rand()%2;

        switch(a)
        {
            case 1: printf("head\n");           //if(a%2==0)
                    head++;
                    break;

            case 2: printf("tail\n");          //else if(a%2!=0)
                    tail++;
                    break;
        }
    }
printf("Head = %d \nTail = %d",head,tail);
}



/*
Different:
- rand() - does not accept any values as a parameter. But return a value.
- srand() - accept any values as a parameter. But does not return any value.
*/
