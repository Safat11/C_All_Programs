#include<stdio.h>
int main()
{
int m[100],n,o = 0,i,k = 0,p,j;
scanf("%d",&n);
while(n!=-1){
m[k] = n;
k = k + 1;
scanf("%d",&n);
}
for(i=0;i<k;i++){
o = 1;
for(j=i+1;j<k;j++){
if(m[i]==m[j]){
o = o + 1;
p = m[i];
}
}
if(o>1){
break;
}
}
if(o>1){
printf("%d %d\n",p,o);
}else{
printf("None");
}
}
