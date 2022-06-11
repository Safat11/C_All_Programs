#include<stdio.h>
int main()
 {
   int marks,pass=0,fail=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;

   printf(" Enter your marks\n");
   scanf("%d",&marks);
   while ( marks!=-1)
  {
     if(marks>=0&&marks<=60)
 {
     fail++;
     scanf("%d",&marks);
 }
 else if(marks<=60&&marks<=63)
 {
     a++;pass++;
     scanf("%d",&marks);
 }
else if(marks<=63&&marks<=67)
 {
     b++;pass++;
     scanf("%d",&marks);

 }
else if(marks<=67&&marks<=70)
 {
     c++;pass++;
     scanf("%d",&marks);
 }
else if(marks<=70&&marks<=73)
 {
     d++;pass++;
     scanf("%d",&marks);

 }
else if(marks<=73&&marks<=77)
 {
    e++;pass++;
    scanf("%d",&marks);
 }
else if(marks<=77&&marks<=80)
 {
    f++;pass++;
    scanf("%d",&marks);
 }
else if(marks<=80&&marks<=83)
 {
    g++;pass++;
     scanf("%d",&marks);
 }
else if(marks<=83&&marks<=87)
  {
    h++;pass++;
    scanf("%d",&marks);
  }

else if(marks<=87&&marks<=90)
 {
    i++;pass++;
    scanf("%d",&marks);
 }
else if(marks<=90&&marks<=97)
  {
    j++;pass++;
    scanf("%d",&marks);
  }
else if(marks<=97&&marks<=100)
  {
    k++;pass++;
    scanf("%d",&marks);
  }

}
printf("\n fail=%d",fail);
printf("\n pass=%d",pass);
printf("\n  D=%d",a);
printf("\n D+=%d",b);
printf("\n C-=%d",c);
printf("\n C=%d",d);
printf("\n C+=%d",e);
printf("\n B-=%d",f);
printf("\n B=%d",g);
printf("\n B+=%d",h);
printf("\n A-=%d",i);
printf("\n A=%d",j);
printf("\n A+=%d",k);

 return 0;


  }


