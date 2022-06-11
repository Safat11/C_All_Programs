#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 50

int main()
{
    char str[str_size];
    int x, len, vowel, cons;


       printf("Input the string : ");
       fgets(str, sizeof str, stdin);

    vowel = 0;
    cons = 0;
    len = strlen(str);

    for(x=0; x<len; x++)
    {

        if(str[x] =='a' || str[x]=='e' || str[x]=='i' || str[x]=='o' || str[x]=='u' || str[x]=='A' || str[x]=='E' || str[x]=='I' || str[x]=='O' || str[x]=='U')
        {
            vowel++;
        }
        else if((str[x]>='a' && str[x]<='z') || (str[x]>='A' && str[x]<='Z'))
        {
            cons++;
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", cons);
    return 0 ;
}
