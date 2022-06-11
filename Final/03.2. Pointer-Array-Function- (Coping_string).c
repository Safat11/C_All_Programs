//Relationship Between Pointers & Arrays
// Coping a string using Array notation & Pointer notation.

#include<stdio.h>

void copy1(char *s1 , char *s2);
void copy2(char *s1 , char *s2);

int main()
{
    char string1[10];
    char *string2={"Hello"};    //Create a pointer to string
    char string3[10];
    char string4[10]={"Good Bye"};

    copy1(string1,string2);
    printf("String1 = %s\n",string1);

     copy2(string3,string4);
    printf("String3 = %s\n",string3);
}

void copy1(char *s1 , char *s2)
{
    for(int i=0; s2[i] !='\0'; i++)     //(s1[i]=s2[i] !='\0');
    {
        s1[i]=s2[i];                    // ;   {Do nothing in body}
    }
}

void copy2(char *s1 , char *s2)
{
   {

    for( ; (*s1=*s2) !='\0'; s1++, s2++ )
    {
        ;                    // ;   {Do nothing in body}
    }
}

}

