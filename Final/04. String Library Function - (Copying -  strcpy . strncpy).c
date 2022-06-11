//Copying strings : *strcpy ; *strncpy;

/*
. char *strcpy();
- 1st argument must be large enough to store string and terminating null character

. char *strncpy();
- Does not necessarily copy terminating null character

*/

#include<stdio.h>
#include<string.h>

int main()
{
    char x[] = "Happy Birthday to You" ;
    char y[25];
    char z[25];

    //printf("%s %s \n %s %s\n","The string in array x is:",x,"The string in array y is:",strcpy(y,x));

    printf("%s \n%s",x,strcpy(y,x));    //Copy full character x into y.

    //
    strncpy(z,x,14);    //Copy 1st 14 character of x into z. does not copy Null('\0')character.
    z[14] = '\0';

    printf("\n%s",z);
}



