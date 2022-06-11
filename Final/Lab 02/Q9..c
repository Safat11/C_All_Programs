#include <stdio.h>
#include <stdlib.h>


void menu();

struct Product{
    int id;
    char name[20];
    int quantity;
    double price;
};


void Create(){
    system("cls");
    char f_name[50];
    printf("Enter file name: ");
    scanf("%s", f_name);
    FILE *cf;
    cf = fopen(f_name, "w");
    if(cf == NULL){
        printf("Error Opening File\n");
        exit(1);
    }else{
        system("cls");
        printf("How Many Products You Want To Store In Your Shop: ");
        int n;
        scanf("%d", &n);
        struct Product arr[n];
        for(int i = 0; i < n; i++){
            system("cls");
            printf("You are entering %d th product information\n", i+1);
            arr[i].id = i+1;
            printf("\nEnter Product Name: ");
            scanf("%s", arr[i].name);
            printf("\nEnter Product Quantity: ");
            scanf("%d", &arr[i].quantity);
            printf("\nEnter Product Price: ");
            scanf("%lf", &arr[i].price);
            fprintf(cf, "%d     %s      %d      %.2f\n", arr[i].id, arr[i].name, arr[i].quantity, arr[i].price);
        }
        fclose(cf);

        FILE *rf;
        rf = fopen(f_name, "r");
        if(rf == NULL){
            printf("Error Opening File\n");
            exit(1);
        }else{
            system("cls");
            printf("\n\t\t\t\t\t    Current Product in Your Shop\n");
            printf("\t\t\t\t\t=====================================\n");
            printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
            printf("\t\t\t\t\t=====================================\n");
            for(int i=0; i<n; i++){
                while(fscanf(rf, "%d %s %d %lf", &arr[i].id, arr[i].name, &arr[i].quantity, &arr[i].price) != EOF){
                    printf("\t\t\t\t\t%d. %s\t   %d\t\t%.2lf\n", arr[i].id, arr[i].name, arr[i].quantity, arr[i].price);
                }
            }
            printf("\t\t\t\t\t=====================================\n");
            fclose(rf);
        }
    }
    int choice;
    printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
    printf("\t\t\t\t\tYour Choice:: ");
    scanf("%d", &choice);
    if(choice == 1){
        menu();
    }else{
        exit(0);
    }
}

void Add(){
    system("cls");
    char f_name[50];
    printf("Enter file name: ");
    scanf("%s", f_name);
    FILE *cf;
    cf = fopen(f_name, "r");
    if(cf == NULL){
        printf("Error Opening File\n");
        exit(1);
    }else{
        system("cls");
        int id;
        char name[20];
        int quantity;
        double price;
        printf("\n\t\t\t\t\t    Current Product in Your Shop\n");
        printf("\t\t\t\t\t=====================================\n");
        printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
        printf("\t\t\t\t\t=====================================\n");
        while(fscanf(cf, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
            printf("\t\t\t\t\t%d. %s\t   %d\t\t%.2lf\n", id, name, quantity, price);
        }
        printf("\t\t\t\t\t=====================================\n");
        fclose(cf);
        FILE *af;
        af = fopen(f_name, "a");
        printf("\t\t\t\t\tHow many products you want to add in your shop: ");
        int n;
        scanf("%d", &n);
        struct Product arr[n];
        for(int i = 0; i < n; i++){
            system("clear");
            printf("You are entering %d th product information\n", id+1);
            arr[i].id = id+1;
            printf("\nEnter Product Name: ");
            scanf("%s", arr[i].name);
            printf("\nEnter Product Quantity: ");
            scanf("%d", &arr[i].quantity);
            printf("\nEnter Product Price: ");
            scanf("%lf", &arr[i].price);
            fprintf(af, "%d     %s      %d      %.2f\n", arr[i].id, arr[i].name, arr[i].quantity, arr[i].price);
        }
        fclose(af);
    }
    int choice;
    printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
    printf("\t\t\t\t\tYour Choice:: ");
    scanf("%d", &choice);
    if(choice == 1){
        menu();
    }else{
        exit(0);
    }
}

void Read(){
    system("cls");
    char f_name[50];
    printf("Enter file name: ");
    scanf("%s", f_name);
    FILE *rf;
    rf = fopen(f_name, "r");
    if(rf == NULL){
        printf("Error Opening File\n");
        exit(1);
    }else{
        system("cls");
        int id;
        char name[20];
        int quantity;
        double price;
        printf("\n\t\t\t\t\t    Current Product in Your Shop\n");
        printf("\t\t\t\t\t=====================================\n");
        printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
        printf("\t\t\t\t\t=====================================\n");
        while(fscanf(rf, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
            printf("\t\t\t\t\t%d. %s\t   %d\t\t%.2lf\n", id, name, quantity, price);
        }
        printf("\t\t\t\t\t=====================================\n");
        fclose(rf);
    }

    int choice;
    printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
    printf("\t\t\t\t\tYour Choice:: ");
    scanf("%d", &choice);
    if(choice == 1){
        menu();
    }else{
        exit(0);
    }
}

void Update(){
    system("cls");
    char f_name[50];
    printf("Enter file name: ");
    scanf("%s", f_name);
    FILE *ef;
    ef = fopen(f_name, "r");
    if(ef == NULL){
        printf("Error Opening File\n");
        exit(1);
    }else{
        system("cls");
        int id;
        char name[20];
        int quantity;
        double price;
        printf("\n\t\t\t\t\t    Current Product in Your Shop\n");
        printf("\t\t\t\t\t=====================================\n");
        printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
        printf("\t\t\t\t\t=====================================\n");
        while(fscanf(ef, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
            printf("\t\t\t\t\t%d. %s\t   %d\t\t%.2lf\n", id, name, quantity, price);
        }
        printf("\t\t\t\t\t=====================================\n");
    }
    rewind(ef);
    printf("\n\n\t\t\t\t\tEnter Product ID You Want To Edit: ");
    char target;
    scanf("%d", target);
    remove(f_name);
    FILE *wf;
    wf = fopen(f_name, "w");
    if(wf == NULL){
        printf("Error Opening File\n");
        exit(1);
    }else{
        system("cls");
        int id;
        char name[20];
        int quantity;
        double price;
        while(fscanf(ef, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
            if(id == target){
                printf("\n\t\t\t\t\t    You Are Updating This Product\n");
                printf("\t\t\t\t\t=====================================\n");
                printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
                printf("\t\t\t\t\t=====================================\n");
                printf("\t\t\t\t\t%d. %s\t   %d\t\t%.2lf\n", id, name, quantity, price);
                printf("\n\n\t\t\t\t\tEnter New Product Name: ");
                scanf("%s", name);
                printf("\n\n\t\t\t\t\tEnter New Product Quantity: ");
                scanf("%d", &quantity);
                printf("\n\n\t\t\t\t\tEnter New Product Price: ");
                scanf("%lf", &price);
                fprintf(wf, "%d     %s      %d      %.2lf\n", id, name, quantity, price);
            }else{
                fprintf(wf, "%d     %s      %d      %.2lf\n", id, name, quantity, price);
            }
        }
        system("cls");
        printf("\n\t\t\t\t\t      Your Shop Updated Succesfully!\n");
        fclose(wf);
    }
    fclose(ef);

    int choice;
    printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
    printf("\t\t\t\t\tYour Choice:: ");
    scanf("%d", &choice);
    if(choice == 1){
        menu();
    }else{
        exit(0);
    }
}

void Delete(){
    system("cls");
    char f_name[50];
    printf("Enter file name: ");
    scanf("%s", f_name);
    FILE *ef;
    ef = fopen(f_name, "r");
    if(ef == NULL){
        printf("Error Opening File\n");
        exit(1);
    }else{
        system("cls");
        int id;
        char name[20];
        int quantity;
        double price;
        printf("\n\t\t\t\t\t    Current Product in Your Shop\n");
        printf("\t\t\t\t\t=====================================\n");
        printf("\t\t\t\t\tID Name\t\tQuantity\tPrice\n");
        printf("\t\t\t\t\t=====================================\n");
        while(fscanf(ef, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
            printf("\t\t\t\t\t%d. %s\t   %d\t\t%.2lf\n", id, name, quantity, price);
        }
    }
    rewind(ef);
    printf("\n\n\t\t\t\t\tEnter Product ID You Want To Delete: ");
    int target;
    scanf("%d", &target);
    remove(f_name);
    FILE *wf;
    wf = fopen(f_name, "w");
    if(wf == NULL){
        printf("Error Opening File\n");
        exit(1);
    }else{
        system("cls");
        int id;
        char name[20];
        int quantity;
        double price;
        while(fscanf(ef, "%d %s %d %lf", &id, name, &quantity, &price) != EOF){
            if(id == target){
                continue;
            }else{
                fprintf(wf, "%d     %s      %d      %.2lf\n", id, name, quantity, price);
            }
        }
        system("cls");
        printf("\n\t\t\t\t\t      %dth Target Deleted Succesfully! \n", target);
        fclose(wf);
    }
    fclose(ef);

    int choice;
    printf("\n\t\t\t\t\tIf you want to go main menu press 1\n\t\t\t\t\tIf you want to exit press 2.\n");
    printf("\t\t\t\t\tYour Choice:: ");
    scanf("%d", &choice);
    if(choice == 1){
        menu();
    }else{
        exit(0);
    }
}


void menu(){
    system("cls");
    printf("\t\t\t\t=====================================");
    printf("\n\t\t\t\t   What do you want to do?");
    printf("\n\t\t\t\t   01. Do You Want To Create A File?");
    printf("\n\t\t\t\t   02. Do You Want To Add Product in your shop?");
    printf("\n\t\t\t\t   03. Do You Want To Read A File?");
    printf("\n\t\t\t\t   04. Do You Want To Edit A File?");
    printf("\n\t\t\t\t   05. Do You Want To Delete A Product?\n");
    printf("\t\t\t\t=====================================\n");
    int n;
    printf("\n\t\t\t\tEnter Your Choice: ");
    scanf("%d", &n);
    if(n == 1){
        Create();
    }else if(n == 2){
        Add();
    }else if(n == 3){
        Read();
    }else if(n == 4){
        Update();
    }else if(n == 5){
        Delete();
    }
}


int main(){
    menu();
    return 0;
}
