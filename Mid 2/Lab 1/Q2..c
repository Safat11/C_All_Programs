#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Check(int r1,int r2,int n );
int main()
{
int n;
  printf("INPUT AN INTEGER NUMBER BETWEEN 1 AND 6: ");
  scanf("%d",&n);
  srand(time(0));
    int r1=1+(rand()%6);
    int r3=1+(rand()%6);
  printf("1st random number is %d\n",r1);
  printf("2nd random number is %d\n",r3);
    Check(r1,r3,n);
}
int Check(int r1,int r3,int n)
{
if(n==r1 && n==r3)
   {
    printf("\n YOU WIN!!!\n");
   }
else
   {
    printf("\n YOU LOSE!!!\n");
   }
return 0;
}

