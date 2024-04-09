#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Nhập a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phương trình vô số nghiệm.\n");
            } else {
                printf("Phương trình vô nghiệm.\n");
            }
        } else {
            printf("Phương trình có một nghiệm: x = %.2f\n", -c/b);
        }
    } else {
        delta = b*b - 4*a*c;
        if (delta < 0) {
            printf("Phương trình vô nghiệm.\n");
        } else if (delta == 0) {
            printf("Phương trình có nghiệm kép: x1 = x2 = %.2f\n", -b/(2*a));
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phương trình có hai nghiệm phân biệt: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
