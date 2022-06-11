//Concatenating strings : *strcat ; *strncat;
/*
char *strcat(char *s1, char *s2);
- Appends 2nd argument to 1st argument

char *strncat(char *s1, char *s2, size_t n);
- Appends specified number of characters, from 2nd argument to 1st argument
*/
#include<stdio.h>
#include<strings.h>

int main()
{
    char s1[20] = "Happy ";
    char s2[] = "New year ";
    char s3[40]="";

    printf("%s\n", strcat(s1,s2 ));

    printf("%s\n", strncat(s3,s1,6 ));

    printf("%s\n", strcat(s3,s1 ));
}

