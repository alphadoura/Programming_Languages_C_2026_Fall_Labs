// Name: BARRY ABDOURAHAMANE
// Student ID: 260ADB181
#include <stdio.h>

int sum_to_n(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Error: Invalid input.\n");
  } else {
    int result = sum_to_n(n);
    printf("Result: %d\n", result);
  }

  return 0;
}
