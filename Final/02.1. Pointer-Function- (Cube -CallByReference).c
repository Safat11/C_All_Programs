//Cube a variable using call-by-reference with a pointer argument.

#include<stdio.h>
void cubeByReference(int *x);

int main()
{
  int Number = 5;
  printf("The original value is = %d\n",Number);

  cubeByReference(&Number);      //Pass Address of Number to cubeByReference

  printf("The new value is = %d\n",Number);


}

void cubeByReference(int *x)    //Calculate Cube of *x; Modifies variable Number in main
{
    *x = *x * *x * *x;
}

