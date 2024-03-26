#include <stdio.h>

void nhapMaTran(int n, int a[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Nhập phần tử hàng %d cột %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int n, int a[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void congMaTran(int n, int a[n][n], int b[n][n], int c[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void truMaTran(int n, int a[n][n], int b[n][n], int c[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void nhanMaTran(int n, int a[n][n], int b[n][n], int c[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            c[i][j] = 0;
            for(int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int n;
    printf("Nhập kích thước ma trận (nxn): ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    printf("Nhập ma trận thứ nhất:\n");
    nhapMaTran(n, a);
    printf("Nhập ma trận thứ hai:\n");
    nhapMaTran(n, b);
    int choice;
    do {
        printf("1. Cộng 2 ma trận\n");
        printf("2. Trừ 2 ma trận\n");
        printf("3. Nhân 2 ma trận\n");
        printf("0. Thoát\n");
        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                congMaTran(n, a, b, c);
                printf("Kết quả cộng 2 ma trận:\n");
                inMaTran(n, c);
                break;
            case 2:
                truMaTran(n, a, b, c);
                printf("Kết quả trừ 2 ma trận:\n");
                inMaTran(n, c);
                break;
            case 3:
                nhanMaTran(n, a, b, c);
                printf("Kết quả nhân 2 ma trận:\n");
                inMaTran(n, c);
                break;
            case 0:
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ!\n");
        }
    } while(choice != 0);
    return 0;
}

