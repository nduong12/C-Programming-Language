#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);


    printf("Bội số chung nhỏ nhất của %d và %d là %d\n", a, b, lcm(a, b));

    return 0;
}

