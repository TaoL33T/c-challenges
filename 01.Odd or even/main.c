#include <stdio.h>

void main() {
    // Create a function that takes a `number` 
    // and returns a `string` that says 
    // if the given number is `odd` or `even`
    
    int a;
    printf("Input the number: ");
    scanf("%d", &a);

    a % 2 != 0 ? printf("odd") : printf("even");

}
