#include <stdio.h>

// Định nghĩa hàm để tính tổng
double calculate_sum(int n) {
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += 1.0/i;
    }
    return s;
}

int main() {
    // Giả định n là một giá trị cố định
    int n;
    scanf("%d", &n);

    // Tính tổng và in kết quả
    printf("Tổng S=1+½+1/3+...+1/%d là %.2f\n", n, calculate_sum(n));

    return 0;
}

