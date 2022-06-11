/*
Header File: <ctype.h>
//Using function: isdigit(); isalpha(); isalnum(); isxdigit();    :    islower(); isupper(); tolower(); toupper();    :     isspace();

#include<stdio.h>
#include<ctype.h>

*/

int main()
{
    //i. isalpha(C) - Alphabet Word:
    char C= 'A';

    if(isalpha(C))
    {
        printf("%c is a Alphabet.\n",C);
    }
    else
    {

        printf("%c is not a Alphabet.\n",C);
    }

    //ii. isdigit(N) - Number:
    char N = '8';


    if(isdigit(N))
    {
        printf("%c is a Digit.\n",N);
    }
    else
    {

        printf("%c is not a Digit.\n",N);
    }


    //iii. isalnum(CN) - Alphabet Or Number:
    char CN = '5';
    if(isalnum(CN))
    {
        printf("%c is a Aphabet Or Digit.\n",CN);
    }
    else
    {

        printf("%c is not a Alphabet Or Digit.\n",CN);
    }


    //iv. isupper(UW)- Upper Word:
    char UW = 'A';
    if(isupper(UW))
    {
        printf("%c is a Upper Word.\n",UW);
    }
    else
    {

        printf("%c is not a Upper Word.\n",UW);
    }


    //v. islower(LW) - Lower Word:
    char LW = 'g';
    if(islower(LW))
    {
        printf("%c is a Lower Word.\n",LW);
    }
    else
    {

        printf("%c is not a Lower Word.\n",LW);
    }


    //vi. tolower() ; vii. toupper();
    char LU = 'S';

    printf("Lowercase of %c is: %c \n",LU, tolower(LU));
    printf("Uppercase of %c is: %c \n",LU, toupper(LU));

    //tolower() ; toupper(); - Character ASCII Value:("%d")
    printf("Lowercase of %c is: %d \n",LU, tolower(LU));
    printf("Uppercase of %c is: %d \n",LU, toupper(LU));


    //viii. isspace() -  \n \t  \v  or white space.
    char S = '\t';
    if(isspace(S))
    {
       printf("%c is a space char.\n",S);
    }
    else
    {
        printf("%c is not a space char.",S);
    }
}

