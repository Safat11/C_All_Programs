//Using gets and putchar


#include<stdio.h>
void reverse(char *sptr);

int main()
{
    char sentence [80];

    printf("Enter a line of Text: ");
    fgets(sentence, 80, stdin);     //use fgets to read line of text

    printf("\n\nThe line printed backward: ");
    reverse(sentence);

    getch();
}


void reverse(char *sptr)

{
    if(sptr[0]=='\0')   //if end of the string
    {
        ;
    }
    else    //if not end of the string
    {
        reverse(&sptr[1]);  //recursion step
        putchar(sptr[0]);   //Use putchar to display character
    }
}

