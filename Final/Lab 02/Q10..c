#include <stdio.h>

int main() {
    FILE *fp = fopen("data-size.dat", "w");
    fprintf(fp, "Data type Size\n");
    fprintf(fp, "char %d\n", sizeof(char));
    fprintf(fp, "unsigned char %d\n", sizeof(unsigned char));
    fprintf(fp, "short int %d\n", sizeof(short int));
    fprintf(fp, "unsigned short int %d\n", sizeof(unsigned short int));
    fprintf(fp, "int %d\n", sizeof(int));
    fprintf(fp, "unsigned int %d\n", sizeof(unsigned int));
    fprintf(fp, "long int %d\n", sizeof(long int));
    fprintf(fp, "unsigned long int %d\n", sizeof(unsigned long int));
    fprintf(fp, "float %d\n", sizeof(float));
    fprintf(fp, "double %d\n", sizeof(double));
    fprintf(fp, "long double %d\n", sizeof(long double));
    fclose(fp);
    return 0;
};
