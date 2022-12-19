#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void primefactor(int);

int main(void) {
  int a, c, prod = 1;
  int ch;
  do {
    printf("\n*** Math Ops ***\n");
    printf("1. Square Root\n");
    printf("2. Square \n");
    printf("3. Cube\n");
    printf("4. Prime number check\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("7. Exit\n");
    printf("Enter the valid choice(1-7):");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      printf("Enter the number:");
      scanf("%d", &a);
      printf("%f\n", sqrt(a));
      break;

    case 2:
      printf("Enter the number:");
      scanf("%d", &a);
      printf("%f\n", pow(a, 2));
      break;

    case 3:
      printf("Enter the number:");
      scanf("%d", &a);
      printf("%f\n", pow(a, 3));
      break;

    case 4:
      printf("Enter the number:");
      scanf("%d", &a);
      for (int i = 1; i < a; i++) {
        if (a % i == 0)
          c = i;
        }
      if (c == 1)
        printf("The number is a prime number\n");
      else
        printf("The number is composite number\n");

      break;

    case 5:
      printf("Enter the number:");
      scanf("%d", &a);
      for (int i = 1; i <= a; i++) {
        prod = prod * i;
      }
      printf("Factorial of %d is %d\n", a, prod);

      break;

    case 6:
      printf("Enter the number:");
      scanf("%d", &a);
      printf("Prime Factor is:");
      for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
          c = i;
          if (c != 1)
            primefactor(c);
        }
      }
      break;

    case 7:
      exit(0);
      break;

    default:
      printf("Enter a valid option\n");
      break;
    }

  } while (ch != 0);
  return 0;
}

void primefactor(int a) {
  int c = 0;
  for (int i = 1; i < a; i++) {
    if (a % i == 0)
      c = i;
  }
  if (c == 1)
    printf("%d\t", a);
  
}
