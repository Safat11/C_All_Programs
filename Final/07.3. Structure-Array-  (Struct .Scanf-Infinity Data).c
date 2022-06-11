#include<stdio.h>
#include<stdlib.h>

struct book
{
    char title[100];
    char author[100];
    char subject[100];

    int book_id;
};

int main()
{
    int n,i;
    printf("Enter the amount of books: ");
    scanf("%d",&n);

    struct book a[n];

    for(i=0; i<n; i++)
    {
        printf("\nEnter book %d title: ",i+1);
        scanf("%s",&a[i].title);
        //gets(a[i].title);

        printf("\nEnter book %d author: ",i+1);
        scanf("%s",&a[i].author);
        //gets(a[i].author);

        printf("\nEnter book %d subject: ",i+1);
        scanf("%s",&a[i].subject);
        //gets(a[i].subject);


        printf("\nEnter book %d Book Id: ",i+1);
        scanf("%d",&a[i].book_id);

    }

    for(i=0; i<n; i++)
    {
        printf("\nBook %d Title: %s\n", i+1,a[i].title);
        printf("\nBook %d Author: %s\n", i+1,a[i].author);
        printf("\nBook %d Subject: %s\n", i+1,a[i].subject);
        printf("\nBook %d Book Id: %d\n", i+1,a[i].book_id);
    }
}

