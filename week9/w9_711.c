#include <stdio.h>

double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double calculate_e(double epsilon) {
    double e = 0.0;
    double term;
    int n = 0;

    do {
        term = 1.0 / factorial(n);
        e += term;
        n++;
    } while (term >= epsilon);

    return e;
}

int main() {
    double epsilon;
    scanf("%lf", &epsilon);

    printf("Số e với độ chính xác %lf là %lf\n", epsilon, calculate_e(epsilon));

    return 0;
}

