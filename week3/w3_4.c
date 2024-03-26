#include <stdio.h>
#define PI 3.14

int main()
{
    float R, S, V;
    printf("Nhap R: ");
    scanf("%f", &R);

    S = 4 * PI * R * R;
    V = (4 / 3) * PI * R * R * R;
    printf("\tDien tich\tThe tich\n");
    printf("\t%f\t%f\n", S, V);

    return 0;
}

