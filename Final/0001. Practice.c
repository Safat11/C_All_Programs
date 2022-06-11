#include <stdio.h>

#define entries 10

int main()

{

char name[10]; // to get name as string

int ph_num; // to get phone number

int search_num; // to get the num which is to be searched

int arr[entries][11]; // 2D array

int flag; // to tell search succesfull or not

for(int i=0;i<entries;i++)

{

printf("enter name and phone number : \n");

scanf("%s",name);

scanf("%d",&ph_num);

arr[i][0]=ph_num;

for(int j=0;name[j]!='\0';j++)

{

arr[i][j+1] = (int) name[j]; // converting char to int

}

}

printf("enter no to search : \n");

scanf("%d",&search_num);

for (int i=0;i<entries;i++)

{

if(search_num==arr[i][0])

{

printf("******************** FOUND ******************\n");

for(int j=1;arr[i][j]!='\0';j++)

printf("%c",arr[i][j]);

flag =1;

}

}

if(flag!=1)

{

printf("--- NOT FOUND --------------------------------\n");

}

return 0;

}
