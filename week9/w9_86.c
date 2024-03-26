#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
	
    printf("Ước số chung lớn nhất của %d và %d là %d\n", a, b, gcd(a, b));

    return 0;
}

