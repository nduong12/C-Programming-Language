#include <stdio.h>
#define pi 3.14
int main() {
    float r, cv, dt;
    printf("Ban kinh: ");
    scanf("%f", &r);
    cv = 2 * pi * r;
    dt = pi * r * r;
    printf("Chu vi: %f\n", cv);
    printf("Dien tich: %f", dt);
    return 0;
}
