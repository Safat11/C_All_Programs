#include<stdio.h>
#include<string.h>

struct Library  //Data type
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Library Book);    //Function declaration

int main()
{
    struct Library Book1;       //Declare Book1 of type Book
    struct Library  Book2;      //Declare Book2 of type Book


    /*Book 1 specification*/
    strcpy(Book1.title, "C Programming");
    strcpy(Book1.author, "Amran Hossain Safat");
    strcpy(Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495700;


    /*Book 2 specification*/
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Zara khan");
    strcpy(Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 5748600;

    /*print Book1 info*/
    printBook(Book1);


    /*print Book2 info*/
    printBook(Book2);

    getch();
}

void printBook(struct Library Book)
{
    printf("\nBook title : %s\n",Book.title);
    printf("Book author : %s\n",Book.author);
    printf("Book subject : %s\n",Book.subject);
    printf("Book book_id : %d\n",Book.book_id);

}


