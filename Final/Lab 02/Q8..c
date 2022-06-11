#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{
int roll;
char name[50];
};
int main()
{
struct Student students[2];
students[0].roll = 100918273;
strcpy(students[0].name, "Alan Jones");
students[1].roll = 239495959;
strcpy(students[1].name, "James Bond");
FILE *fptr = fopen("students.txt", "w");
for(int i = 0; i < 2; i++){
fprintf(fptr, "roll_no = %d ", students[i].roll);
fprintf(fptr, "name = %s\n", students[i].name);
}
fclose(fptr);
fptr = fopen("students.txt", "r");
char c = fgetc(fptr);
while (c != EOF)
{
printf ("%c", c);
c = fgetc(fptr);
}
fclose(fptr);
return 0;
}
