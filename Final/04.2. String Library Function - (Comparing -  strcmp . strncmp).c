//Comparing strings: *strcmp ; *strncmp;

/*
int strcmp(char *s1 , *s2);
> Compares character by character - (ASCII: 65=='A' , 97=='a')(EBCDIC)
>Returns
    -  0 if strings are equal
    -  1 if first string is grater then second string
    - -1 if first string is less then second string

int strncmp(chat *s1 , *s2 , size_t n);
- Stop if it reaches null character in one of arguments
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char *s1 = "Happy New Year";
    char *s2 = "Happy New Year";
    char *s3 = "Happy Holiday";

    printf("%s\n%s\n%s\n",s1,s2,s3);

   // printf("\n%s%d\n%s%d\n%s%d\n","strcmp(s1,s2) = ",strcmp(s1,s2),"strcmp(s1,s3) = ",strcmp(s1,s3),"strcmp(s3,s1)",strcmp(s3,s1));

    printf("\n%2d\n%2d\n%2d\n",strcmp(s1,s2),strcmp(s1,s3),strcmp(s3,s1));

    printf("\n%s%d\n%s%d\n%s%d\n","strncmp(s1,s2,6) = ",strncmp(s1,s2,6),"strncmp(s1,s3,7) = ",strncmp(s1,s3,7),"strncmp(s3,s1,7)",strncmp(s3,s1,7));


}

