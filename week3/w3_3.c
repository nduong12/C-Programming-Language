#include <stdio.h>
int main()
{
    float x, y;
    scanf("\t%f\t%f", &x, &y);

    float tong, hieu, tich, thuong;
    tong = x + y;
    hieu = x - y;
    tich = x * y;
    thuong = x / y;
    printf("\tTong\tHieu\tTich\tThuong\n");
    printf("\t%.3f\t%.3f\t%.3f\t%.3f\n", tong, hieu, tich, thuong);

    return 0;
}

