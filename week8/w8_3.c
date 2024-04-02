#include <stdio.h>

int main() {
    double epsilon;
    printf("Nhập số epsilon (<1): ");
    scanf("%lf", &epsilon);

    double e = 1.0; // Khởi tạo giá trị ban đầu của e
    double term = 1.0; // Khởi tạo giá trị ban đầu của từng phần tử trong chuỗi
    int n = 1; // Khởi tạo giá trị ban đầu của n

    // Vòng lặp chính để tính toán giá trị của e
    while (term >= epsilon) {
        term = term / n; // Tính giá trị của phần tử tiếp theo trong chuỗi
        e = e + term; // Cộng dồn giá trị của phần tử vào e
        n++; // Tăng n lên sau mỗi lần lặp
    }

    printf("Giá trị của e: %.10lf\n", e); // In giá trị của e ra màn hình

    return 0;
}

