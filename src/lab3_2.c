#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void modify_value(int *val) {
    *val = *val * 2;
}

int main(void) {
    int num1 = 3;
    int num2 = 7;

    printf("Before swap: a=%d, b=%d\n", num1, num2);

    swap(&num1, &num2);
    printf("After swap: a=%d, b=%d\n", num1, num2);

    modify_value(&num1);
    printf("After modify_value: a=%d\n", num1);

    return 0;
}