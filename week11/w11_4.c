#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    // Declare a pointer to the end of the array
    int *pointer = &array[size - 1];

    printf("The values of the array in reverse order are:\n");

    // Use the pointer to traverse the array in reverse order
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", *pointer);
        pointer--;
    }

    return 0;
}

