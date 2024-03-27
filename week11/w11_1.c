#include <stdio.h>

int main() {
    // Input 3 integers
    int a, b, c;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    printf("Enter the third integer: ");
    scanf("%d", &c);

    // Declare a pointer
    int *pointer = NULL;

    // Point to each integer in turn and display the value of the pointer
    int *numbers[] = {&a, &b, &c};
    for (int i = 0; i < 3; i++) {
        pointer = numbers[i];
        printf("The pointer is pointing to the number %d\n", *pointer);
    }

    return 0;
}

