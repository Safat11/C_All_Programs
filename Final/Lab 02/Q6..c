#include<stdio.h>
#include<stdlib.h>


int main(){
    system("cls");
    FILE *f;
    f = fopen("sort_file.txt","w");
    if(f == NULL){
        printf("Error opening file\n");
        exit(1);
    }else{
        int n, size=0;
        printf("Enter a number: ");
        scanf("%d",&n);
        while(n != -1){
            fprintf(f,"%d\n",n);
            printf("Enter a number: ");
            scanf("%d",&n);
            size++;
        }
        fclose(f);
        int arr[size];
        FILE *f2;
        f2 = fopen("sort_file.txt","r");
        if(f2 == NULL){
            printf("Error opening file\n");
            exit(1);
        }else{
            int n2, i=0;
            while(fscanf(f2,"%d",&n2) != EOF){
                printf("%d\n",n2);
                arr[i] = n2;
                i++;
            }
            fclose(f2);
        }
        for(int i=0; i<size; i++){
            for(int j=0; j<size-1; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        printf("\nSorted array: ");
        for(int i=0; i<size; i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
