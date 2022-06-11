/*
- gets(variable)  //as like scanf()

- fputc - using 2 parameter ;

- fputc(string , fptr);     //fptr = file pointer(*file_name)
*/

#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];


    file = fopen("D:\\write.txt","w");

    if(file = NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File is Opened.\n");

        printf("Enter your Full Name: ");
        gets(name);

        fputc(name,file);
        printf("File is written successfully.\n");
        fclose(file);
    }
}
