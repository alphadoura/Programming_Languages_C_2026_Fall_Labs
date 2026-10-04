// Name: BARRY ABDOURAHAMANE
// Student ID: 260ADB181
#include <stdio.h>

int array_min(int arr[], int size) {
  int min = arr[0];
  int i;
  for (i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int array_max(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) max = arr[i];
  }
  return max;
}

int array_sum(int arr[], int size) {
  int total = 0;
  for (int i = 0; i < size; i++) {
    total = total + arr[i];
  }
  return total;
}

float array_avg(int arr[], int size) {
  int sum = array_sum(arr, size);
  float avg = (float)sum / size;
  return avg;
}

int main(void) {
  int numbers[5] = {10, 20, 5, 30, 15};
  int n = 5;

  printf("Min: %d\n", array_min(numbers, n));
  printf("Max: %d\n", array_max(numbers, n));
  printf("Sum: %d\n", array_sum(numbers, n));
  printf("Avg: %.2f\n", array_avg(numbers, n));

  return 0;
}