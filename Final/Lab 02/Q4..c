#include<stdio.h>

struct car
{
   char name[20];
   char model[20];
   int year;
   double price;
};


int main()
{
    char f_name[50];
    FILE *af;
    printf("Enter file name: ");
    scanf("%s", f_name);

        af = fopen(f_name, "w");
        printf("\t\t\t\t\tHow many inputs you want to add : ");
        int n;
        scanf("%d", &n);
        struct car arr[n];
        for(int i = 0; i < n; i++){

            printf("\nEnter car Name: ");
            scanf("%s", arr[i].name);
            printf("\nEnter model : ");
            scanf("%s", arr[i].model);
            printf("\nEnter year : ");
            scanf("%d", &arr[i].year);
            printf("\nEnter car Price: ");
            scanf("%lf", &arr[i].price);
            fprintf(af, "%s     %s      %d      %.2f\n", arr[i].name, arr[i].model, arr[i].year, arr[i].price);
        }
        fclose(af);

        FILE *rf;
    rf = fopen(f_name, "r");
    if(rf == NULL){
        printf("Error Opening File\n");
        exit(1);
    }else{
        system("cls");
        char name[20];
        char model[20];
        int year;
        double price;
        printf("\n\t\t\t\t\t    Current cars in Showroom\n");
        printf("\t\t\t\t\t=====================================\n");
        printf("\t\t\t\t\tID Name\t\tMode\t\tYear\t\tPrice\n");
        printf("\t\t\t\t\t=====================================\n");
        while(fscanf(rf, "%s %s %d %lf", name, model, &year, &price) != EOF){
            printf("\t\t\t\t\t%s. %s\t   %d\t\t%.2lf\n", name, model, year, price);
        }
        fclose(rf);
}
}

