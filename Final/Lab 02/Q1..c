#include<stdio.h>
int main()
{

    FILE  *cfptr;
    char fname[20];
    printf(" Input the filename to be opened : ");
	scanf("%s",fname);

	cfptr = fopen(fname, "w");
	if(cfptr==NULL)
     {
         printf(" File does not exist or can not be opened.");
      }
    else
    {
        int num;
        printf("Enter your numbers : ");
        scanf("%d" , &num);
        while(num!=-1)
        {
            fprintf(cfptr, "%d " , num);
            scanf("%d", &num);
        }
        fclose(cfptr);
    }
    cfptr = fopen(fname, "r");
	if(cfptr==NULL)
     {
         printf(" File does not exist or can not be opened.");
      }
    else
    {
        int num;
        fscanf(cfptr, "%d" , &num);
        while(!feof(cfptr))
        {
            printf("%d " , num);
            fscanf(cfptr, "%d" , &num);

        }
        fclose(cfptr);
    }
    return 0;
}

