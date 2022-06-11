#include<stdio.h>
int main(){
int i,j,k,s,p;
float sales,a[6][6], total = 0.0;
for(i=0;i<=5;i++){
for(j=0;j<=5;j++){
a[i][j] = 0.00;
}
}

printf("Enter the salesperson (1 - 4), product number (1 - 5) and total sales.\n");
printf("Enter -1 for the salesperson to end input.\n");

while(1){
scanf("%d",&s);
if(s==-1){
break;
}
scanf("%d",&p);
scanf("%f",&sales);
a[s][p] = sales;
}
printf("The total sales for each sales person are displayed at the end of each row,\n");
printf("and the total sales for each product are displayed at the bottom of eachcolumn.\n\n");
for(i=1;i<=5;i++){
printf(" %d",i);
}
printf(" Total\n");
for(i=1;i<=4;i++){
total = 0.00;
for(j=1;j<=5;j++){
total = total + a[i][j];
}
a[i][6] = total;
}
for(i=1;i<=4;i++){
total = 0.00;
for(j=1;j<=5;j++){
total = total + a[i][j];
}
a[i][6] = total;
}
for(j=1;j<=6;j++){
total = 0.00;
for(i=1;i<=4;i++){

total = total + a[i][j];
}
a[5][j] = total;
}
for(i=1;i<=4;i++){
printf("%d",i);
for(j=1;j<=6;j++){
printf(" %.2f",a[i][j]);
}
printf("\n");
}
printf("\n\nTotal ");
for(j=1;j<=5;j++){
printf("%.2f ",a[5][j]);
}
}
