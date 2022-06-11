#include<stdio.h>
#include <stdlib.h>
int main(){
int M[50],n=0,k
,i,g = 0;

srand(time(0));
for(i=0;i<50;i++){
M[i] = (rand() % 50)+1;
}
for(i=0;i<50;i++){
printf("%d ",M[i]);
}
while(1){
printf("\nEnter a number: ");
scanf("%d",&n);
if(n==-1){
break;
}
for(i=0;i<50;i++){
if(M[i]==n){
g = 1;
break;
}
}
if(g == 1){
printf(" present !\n");
g = 0;
}else{
printf("not present !\n");
}
}
}
