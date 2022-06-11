#include <stdio.h>
int main()
{

  char A[50];
  int V;
  int C;


  V = C = 0;


  printf("Enter a string: ");
  fgets(A, sizeof(A), stdin);


  for (int i = 0; A[i] != '\0'; ++i) {


    A[i] = tolower(A[i]);

    if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' ||
        A[i] == 'o' || A[i] == 'u') {


      ++V;
    }


    else if ((A[i] >= 'a' && A[i] <= 'z')) {
      ++C;
    }

  }

  printf("number of Vowels: %d", V);
  printf("\nNumber of Consonant: %d", C);

  return 0;
}
