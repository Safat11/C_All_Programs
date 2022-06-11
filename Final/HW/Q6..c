#include <stdio.h>
int main()
{
    char str[100];
    int i;
    int words=1,characters=0,space=0;
    printf("Please enter the string \n");
    gets(str);
    for(i=0; str[i] != '\0'; i++){
            if(str[i]!=' '){
                characters++;
            }
             else if(str[i]==' ' || str[i] != '\n' || str[i] != '\t'){
                words++;
            }
    }
printf("\nTotal words: %d ",words);
printf("\nTotal characters: %d",characters);
printf("\nSpace: %d ",(words-1));
getch();
    return 0;
}
