#include <stdio.h>

void print_values(int x, int y, int z, int *p, int *q, int *r) {
    printf("x = %d, y = %d, z = %d, p = %p, q = %p, r = %p, *p = %d, *q = %d, *r = %d\n", x, y, z, p, q, r, *p, *q, *r);
}

void swap_values(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    // Declare 3 integer variables and 3 integer pointers
    int x = 1, y = 2, z = 3;
    int *p = &x, *q = &y, *r = &z;

    // Print the values
    print_values(x, y, z, p, q, r);

    // Swap the values of x, y, and z
    swap_values(&x, &y, &z);

    // Print the values
    print_values(x, y, z, p, q, r);

    // Swap the values of p, q, and r
    swap_values((int *)&p, (int *)&q, (int *)&r);

    // Print the values
    print_values(x, y, z, p, q, r);

    return 0;
}

