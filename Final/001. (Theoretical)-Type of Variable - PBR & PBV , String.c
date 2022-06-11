/*
/* What is the difference Pass by reference & Pass by Value?

- Pass/call by reference(address): Full array pass, original modified , No need to return

- Pass/call by Value: Only value pass, no address, original value not modified
*/


//(3)- Type Of Variable:

/*(i)//Local Variable:    (Initialize Must. Otherwise, program Error)

int f();
int main()
{
   f();
   f();
}
int f()
{
int x=5;   //Local Variable(Initialize Every time you call)
x=x+1;
printf("%d",x); //6     6
}

*/

/*(ii)//static Local Variable:   {The Variable will be inside the function in the bracket}
-(Even if you do not Initialize, Program not Error. Automatically he will count starting 0.)

int f();
int main()
{
   f();
   f();
}
int f()
{
static int x=5;   //static Local Variable(Initialize Only 1st time)
x=x+1;
printf("%d",x); //6     7
}

*/

/*(iii)//Global Variable:     (The Variable will be outside the function)

int f();
int x=5;   //Global Variable(Initialize Only 1st time)
int main()
{
   f();
   f();
}
int f()
{

x=x+1;
printf("%d",x); //6     7
}

*/

// Note: Global variable & Static variable of Religion is Same. Just inside & Outside different.


/* String: String will contain in all character. ("%s")
char color[] = "blue";
char *colorPtr = "blue";
char color[] = {'b', 'l', 'u', 'e', '\0'};


- Multiple Character: Double quotation ("Safat")
- Single Character: Single quotation ('S' , 'a' , 'f' , 'a' , 't')
- Null Character: '\0' (If you use in String in Array, there will be a last in Null character automatically)
*/


/* Pointers: *
- pass by reference (address). No need return().
- close relationship with Array & String


int y = 5   //Local Variable
int *yptr;  // pointer variable (* means value)
yptr = &y;   // & means address


yptr = &y;
*yptr = *&y = y = 5;    (*& Or &* The two together, then cancel out. printing address.)

printf("%d", *yptr)  // 5 (use * printing value)
printf("%h", yptr)  // &y (not use * printing address)

*/
