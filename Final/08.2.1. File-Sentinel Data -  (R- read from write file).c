#include<stdio.h>
#include<stdlib.h>
int main()
{
    int account;    //Account Number
    char name[30];  //Account Name
    float balance;  //Account Balance

    FILE *cfptr;    // cfptr = clients.dat file pointer

    cfptr = fopen("D:\\clients.dat","r");   //create file

    if(cfptr==NULL)     //when unable to create file
    {
        printf("Error");
        exit(1);     // Using - <stdlib.h>
    }
    else
    {
        printf("Enter the account name, and balance: \n");
        printf("Enter EOF to end input : \n");
        printf("?");

        fscanf(cfptr,"%d%s%f\n",&account, &name, &balance);


    while(!feof(cfptr))     //read file contents(Until eof - ctrl+z) . cfptr mean- value read from FILE .
    {
        printf("%d %s %.2f\n",account,name,balance);   // write account, name and balance into file with fprintf
        printf("?");

        fscanf(cfptr,"%d%s%f\n",&account, &name, &balance);        //Sentinel scanf
    }

    fclose(cfptr);
    }
}


