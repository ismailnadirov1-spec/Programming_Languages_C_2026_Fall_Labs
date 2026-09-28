#include <stdio.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
  if (n < 2) {  // n<2 because numbers less than 2 are not prime
    return 0;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;  // n is not prime because there is a factor
    }
  }
  return 1;  // if there are no factors, n is prime
}

int main(void) {
  int n;

  printf("Enter an integer n >= 2: ");
  scanf("%d", &n);

  if (n < 2) {
    printf("error: input must be 2 or greater.\n");
  } else {
    printf("prime numbers up to %d: ", n);
    for (int i = 2; i <= n; i++) {
      if (is_prime(i)) {
        printf("%d ", i);
      }
    }
    printf("\n");
  }
  // TODO: validate input and print all primes up to n

  return 0;
}