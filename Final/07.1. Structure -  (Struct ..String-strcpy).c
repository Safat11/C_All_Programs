#include<stdio.h>

//Global structure:
struct Persons  //Data type
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct Persons person1, person2;

    strcpy(person1.name, "Amran Hossain Safat");
    person1.age = 22;
    person1.salary = 25000.7504;

    printf("Name = %s\n",person1.name);
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    //

    strcpy(person2.name, "Abdullah Mission");
    person2.age = 23;
    person2.salary = 22000.452;

    printf("\n\nName = %s\n",person2.name);
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    getch();
}

