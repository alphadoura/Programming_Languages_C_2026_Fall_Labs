// Name: BARRY ABDOURAHAMANE
// Student ID: 260ADB181

#include <stdio.h>

long long factorial(int n) {
  long long result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(void) {
  int n;

  printf("Enter a non-negative integer n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Error: Invalid input.\n");
  } else {
    long long res = factorial(n);
    printf("Result: %lld\n", res);
  }

  return 0;
}