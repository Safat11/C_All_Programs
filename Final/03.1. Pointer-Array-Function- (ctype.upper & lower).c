// Converting a string to uppercase using a non-constant pointer to non-constant data

/* Straight forward command.
#include<ctype.h>

islower();
toupper();

isupper();
tolower();
*/

#include<stdio.h>
#include<ctype.h>

void convertToUppercase(char *s);

int main()
{
    char string[] = "characters and $32.98";

    printf("The string before conversion is: %s\n",string);

    convertToUppercase(&string);

    printf("\nThe string after conversion is: %s",string);

    getch();
}

void convertToUppercase(char *s)
{
    while(*s != '\0')    // Current character is not '\0'   // for( ; *s != '\0'; ++s)
    {
        if(islower(*s))  // Character is Lowercase
        {
            *s = toupper(*s);   //Convert to Uppercase
        }

        ++s;    // Move s to the next character
    }


}

