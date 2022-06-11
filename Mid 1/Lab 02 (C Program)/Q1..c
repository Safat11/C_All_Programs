#include<stdio.h>
 int main()
 {
     char ch;
     int num1,num2;
     scanf("%d %c %d",&num1,&ch,&num2);

     switch(ch)
     {
       case '+':
         printf("%d \n",num1+num2);
         break;
       case '-':
         printf("%d \n",num1-num2);
         break;
       case '*':
         printf("%d \n",num1*num2);
         break;
       case '/':
         printf("%.2f \n",(float)num1/num2);
         break;
       case '%':
         printf("%d \n",num1%num2);
         break;
       default:
         printf("Error! Invalid Operator.");
     }

     return 0;
 }
