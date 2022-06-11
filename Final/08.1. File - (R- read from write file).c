/*
.Command:
> Write:
    scanf , fprintf
> Read:
    fscanf , printf
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("D:\CSE 103 Lab\Cprogram\Cprograms\Final\program.txt","r");

    if(fptr==NULL)
    {
        printf("Error");
        exit(1);     // Using - <stdlib.h>
    }

    //printf("Enter num: ");
    fscanf(fptr,"%d",&num);       //input from keyboard

    printf("Value of n = %d",num); //write to file
    fclose(fptr);

}




