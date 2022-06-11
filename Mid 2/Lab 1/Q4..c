#include<stdio.h>
 float circle(float);
 float another(float);
 int main()
{
float r,result,l;
printf("enter the radious:");
scanf("%f",&r);
result=circle(r);
printf("the area is %f",result);

 another(result);
return 0;
}
 float circle(float x)
{
    float a,y;
    y=3.14;
    a=y*x*x;

return a;
}
float another(float a)
{

    if(a>25){printf("\n%f is greater than 25",a);


    }
    else{
  printf("\n%f is less than 25",a);

    }

}
