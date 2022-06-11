#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,x1,x2,y1,y2,d;

    while(1)
    {
        scanf("%f %f %f %f",&x1,&y1,&x2,&y2);

        if(x1!=0 && x2!=0 && y1!=0 && y2!=0)
        {
            x = (x2-x1)*(x2-x1);
            y = (y2-y1)*(y2-y1);
            d = sqrt(x+y);

            if(d<=10)
            {
                printf("Near\n");
            }
            else if(d>10)
            {
                printf("Far\n");
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
