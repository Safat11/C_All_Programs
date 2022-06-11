/*
- Single word: character
- Full sentence: string

.Character:
    // getchar(); - Work in as like scanf();
    // putchar(); - Work in as like printf();

. String:
    // gets();  - Work in as like scanf();
    // puts();  - Work in as like printf();
*/
#include<stdio.h>
int main()
{
    char str[50];

    printf("Enter a string: ");
    gets(str);  // Work in as like scanf();

    printf("The string entered is: ");
    puts(str);  //Work in as like printf();


    //

    char ch;
    printf("\n\nEnter a character: ");
    ch = getchar();

    printf("The character entered is: ");
    putchar(ch);
}

