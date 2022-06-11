//Search Function : *strchr ; *strrchr ; *strstr ;

////1st: *strchr;
/*
char *strchr(char *s , int c);
- Locates the first occurrence of character c in string s.
If c is found , a pointer to c in s is returned. Otherwise, a Null pointer is returned.
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char *string = "This is a test";
    char charecter1 = 'S';
    char charecter2 = 'B';

    if (strchr(string, charecter1) !=0)
    {
        printf("\ '%c\'was found in \"%s\".\n",charecter1,string);      //  \'S\'   ;   \"S\"
    }
    else
    {
        printf("\ '%c\'was not found in \"%s\".\n",charecter1,string);
    }

    //
    if (strchr(string, charecter2) !=0)
    {
        printf("\ '%c\'was found in \"%s\".\n",charecter2,string);
    }
    else
    {
        printf("\ '%c\'was not found in \"%s\".\n",charecter2,string);
    }


//// 2nd: *strrchr;
/*
char *strrchr(char *s , int c);
- Locates the last occurrence of character c in string s.
*/


    char *string2 = "A zoo has many animals including zebras";
    char c = 'z';

    printf("\n%s \'%c\' %s\n","Last occurrence of character: ",c ,strrchr(string2,c));


//// 3rd: *strstr;
/*
char *strstr(char *s1 , char *s2);
- Locates the first occurrence in string s1 of string s2.
*/
    char *s3 = "Amran Hossain Safat";
    char *x = "H";

    printf("\n%s  %s","Locates the first occurrence in string S3 of string X.: ",strstr(s3,x));

    getch();
}

