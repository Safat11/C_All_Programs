#include <stdio.h>

int main(void) {

float sum=0,i,n;

printf("Enter the three numbers: \n");;

for(i=1;i<=3;i++){

scanf("%f",&n);

sum=sum+n;

}

printf("avg = %.2f",sum/3);

return 0;

}
