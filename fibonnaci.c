//Task 2 Fibonacci series
//[NAME -ANUPAM KUMAR VERMA C/C++ INTERNSHIP]

/*Implement a program that generates
the Fibonacci series up to a given
number of terms. Prompt the user to
enter the number of terms and display
the series.*/

#include <stdio.h>
int prev1 = 1; // global variable to store the previous term
int prev2 = 0; // global variable to store the second previous term

void fib (int n) { // recursive function to compute the next term
  if (n < 3) {
    return;
  }
  int fn = prev1 + prev2; // next term is the sum of the previous two terms
  prev2 = prev1; // update the second previous term
  prev1 = fn; // update the previous term
  printf("%d ", fn); // print the next term
  return fib (n - 1); // call the function again with n-1
}

void printFib (int n) { // helper function to print the series
  if (n < 1) {
    printf("Invalid number of terms\n");
  }
  else if (n == 1) {
    printf("%d ", 0); // print the first term
  }
  else if (n == 2) {
    printf("%d %d", 0, 1); // print the first two terms
  }
  else {
    printf("%d %d ", 0, 1); // print the first two terms
    fib (n); // call the recursive function to print the rest of the terms
  }
  return;
}

int main () {
  int n; // variable to store the number of terms
  printf("Enter the number of terms: "); // prompt the user to enter the number of terms
  scanf("%d", &n); // read the input from the user
  printFib (n); // call the helper function to print the series
  return 0;
}
