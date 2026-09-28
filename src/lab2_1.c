#include <stdio.h>
//P.S., for some reason wwhen I press f5 it debugs and runs the file "hello.c". to run this one I have to press the run/debug button at the to right.
/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
  int sum = 0;  // here int sum equals 0 because without this line it will show random bits of memory
                
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("error: integer must be greater than 0.\n"); //error handler
  } else {
    int result = sum_to_n(n);
    printf("sum of integers from 1 to %d is: %d\n", n, result);
  }

  // TODO: validate input, call function, and print result

  return 0;
}
