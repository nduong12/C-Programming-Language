#include <stdio.h>

// Function to rotate the values of a, b, and c
void rotate(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a = 1, b = 2, c = 3;

    printf("Before rotation: a = %d, b = %d, c = %d\\n", a, b, c);

    // Call the function to rotate the values of a, b, and c
    rotate(&a, &b, &c);

    printf("After rotation: a = %d, b = %d, c = %d\\n", a, b, c);

    return 0;
}

