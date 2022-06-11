/*
//Files:
    - Used for data persistence
    - Stored on secondary storage devices
Mode: r , w , a , r+ , w+ , a+ , rb , wb , ab , rb+ , wb+ , ab+

FILE ;
fopen("Location:\extention" , "Mode"); //extention: program.txt ; .doc ; .docs : etc
fprintf();
fclose();
*/
/*
.Command:
> Write:
    scanf , fprintf
> Read:
    fscanf , printf
*/

//Create & Write a File: "w"  - Overwrite

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    fptr = fopen("D:\CSE 103 Lab\Cprogram\Cprograms\Final\program.txt","w");

    if(fptr==NULL)
    {
        printf("Error");
        exit(1);     // Using - <stdlib.h>
    }

    printf("Enter num: ");
    scanf("%d",&num);       //input from keyboard

    fprintf(fptr,"%d",num); //write to file
    fclose(fptr);

}



