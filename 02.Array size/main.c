#include <stdio.h>

void main() {
    // Create a function that will take
    // an array of numbers and
    // will return the size of the array
    int my_super_array[] = {5, 12, 18, 10};

    int array_size = sizeof(my_super_array) / sizeof(my_super_array[0]);
    // I don't know why this works, but it works
    printf("%d", array_size);
}
