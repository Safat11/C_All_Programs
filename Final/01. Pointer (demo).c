/* (*)Pointer:

- Pointer(*) is a variable that stores/points the address of another variable.
- Close relationship with arrays and strings . Char *pointer-based strings

//Declaration of Pointer(*):
    data_type *var_name;
Exm, int *p;  ,   char *p;

//2 symbol of Pointer:
i.  & symbol is used to get the Address of the variable.
ii. * symbol is used to get the Value of the variable that the pointer is pointing to.

int x = 5;
int *p;
p =&x;

*/

#include<stdio.h>
int main()
{
    int x = 5;


    printf("value of x = %d\n",x);
    printf("address of x = %d\n",&x);       //Memory address

    //2nd
    int y = 10;
    int *ptr;
    ptr= &y;

    printf("\n\nValue of y = %d\n",y);
    printf("Address of y = %d\n",&y);
    printf("Address of ptr = %d\n",ptr);
    printf("Content of ptr = %d\n",*ptr);
    printf("Address of ptr variable = %d\n",&ptr);


    //3rd
    int a =5, b = 10, sum =0;

    int *ptr1,*ptr2;

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;

    printf("\n\n\nSum = %d\n\n", sum);


    //4th
     int c = 10, d =20, temp;
    int *ptr3 , *ptr4;

    ptr3 = &c;
    ptr4 = &d;

    //swapping
    temp = *ptr3;
    *ptr3 = *ptr4;
    *ptr4 = temp;

    printf("C = %d\n",c);
    printf("D = %d\n",d);


}

