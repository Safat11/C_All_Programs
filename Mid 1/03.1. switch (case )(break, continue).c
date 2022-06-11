/*(range create)- N ... N*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d",&a);

    //for(a=1; a<=10; a++)
    switch(a)
    {
        case 1: printf("One\n");        //if(a==1)
                break;

        case 2: printf("Two\n");       //else if(a==2)
                break;

        // //
        case 1+2: printf("Three\n");
                  break;

        case 2+3: printf("Five\n");
                  break;

        // //
        case 7 ... 20: printf("7 to 20");   // (range create)- N ... N
                        break;

        default: printf("Others\n");  // else
                break;

    }
    return 0;
}
