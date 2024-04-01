#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("Ba so thuc nay tao thanh mot tam giac.");
    else
        printf("Ba so thuc nay khong tao thanh mot tam giac.");

    return 0;
}

