#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int i = 0;
    printf("Enter any string: ");
    gets(str);

    printf("\nString before toggling case: %s", str);



    for(i=0; str[i] != '\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

    }

    printf("\nString after toggling case: %s", str);

    return 0;
}
