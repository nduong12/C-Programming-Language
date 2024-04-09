#include <stdio.h>

// Hàm in thông tin cá nhân
void printInfo() {
    printf("Ho ten: Nguyen Van A\n");
    printf("Ma so sinh vien: 220101234\n");
    printf("Gioi tinh: Nam\n");
    printf("Lop: Cong nghe thong tin\n");
}

// Hàm tính số hạng thứ n của đa thức Chebyshev
double chebyshev(int n, double x) {
    if (x < -1 || x > 1) {
        return -1;
    }

    double T0 = 1, T1 = x, Tn;
    int i = 1;

    while (i < n) {
        Tn = 2 * x * T1 - T0;
        T0 = T1;
        T1 = Tn;
        i++;
    }

    return (n == 0) ? T0 : T1;
}

// Hàm nhập dữ liệu đầu vào từ bàn phím cho biến x
void input(double* x) {
    do {
        printf("Nhập giá trị x (x ∈ [-1,1]): ");
        scanf("%lf", x);
    } while (*x < -1 || *x > 1);
}

int main() {
    // Gọi hàm để in thông tin ra màn hình
    printInfo();

    double x;
    int n = 8; // Số hạng đa thức Chebyshev cố định

    for (;;) {
        input(&x);
        printf("Số hạng thứ %d của đa thức Chebyshev tại x = %.2f là: %.2f\n", n, x, chebyshev(n, x));

        char choice;
        printf("Bạn có muốn tiếp tục không? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y') {
            break;
        }
    }

    return 0;
}

