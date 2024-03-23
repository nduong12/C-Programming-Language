#include <stdio.h>

double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double calculate_e(double epsilon) {
    double e = 1.0;
    int n = 1;
    while(1.0 / factorial(n) >= epsilon) {
        e += 1.0 / factorial(n);
        n++;
    }
    return e;
}

int main() {
    double epsilon;
    printf("Nhập số epsilon < 1: ");
    scanf("%lf", &epsilon);
    double e = calculate_e(epsilon);
    printf("Số e được tính theo công thức với epsilon là %lf là: %lf\n", epsilon, e);
    return 0;
}

