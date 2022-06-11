#include<stdio.h>

#include<string.h>

int main()

{

    FILE *flab;

    char name[20];

    printf("enter your text here: ");

    gets(name);

    int length=strlen(name);

    int i;

    flab=fopen("ToDoLIst.txt","a");

     if(flab==NULL)

        printf("file opened");

     else

        printf("opened");

        for(i=0;i<length;i++)

        {

            fputc(name[i],flab);

        }

        printf("\n file is up ");



     fclose(flab);

}

