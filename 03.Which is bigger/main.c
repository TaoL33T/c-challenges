#include <stdio.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y)) // Shamelessly stolen from stackoverflow

int bigger_number(int a, int b) {
    return MAX(a, b);
}

void main() {
    // Create a function that takes
    // two numbers (2 paramaters)
    // and returns the biggest number
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int result = bigger_number(a, b);

    printf("%d", result);

    // Not the most efficient code,
    // but who needs efficient code?
}
