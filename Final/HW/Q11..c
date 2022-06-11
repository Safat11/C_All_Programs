#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    char toSearch;
    int i;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    toSearch = getchar();
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] == toSearch)
        {
            printf("'%c' is found at index %d\n", toSearch, i);
        }
    }
    return 0;
}
