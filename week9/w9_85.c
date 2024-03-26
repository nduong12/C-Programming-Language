#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double calculate_sin(double x) {
    double result = 0;
    double term;
    int n = 0;

    do {
        term = pow(-1, n) * pow(x, 2*n+1) / factorial(2*n+1);
        result += term;
        n++;
    } while (fabs(term) > 0.0001);

    return result;
}

int main() {
    double x;
    scanf("%lf", &x);

    printf("sin(%f) = %f\n", x, calculate_sin(x));

    return 0;
}

