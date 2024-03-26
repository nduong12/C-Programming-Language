#include <stdio.h>

void nhapMang(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int tongMax(int n, int array[]) {
    int tong = 0;
    for(int i = 1; i < n - 1; i++) {
        if(array[i] > array[i-1] && array[i] > array[i+1]) {
            tong += array[i];
        }
    }
    return tong;
}

int main() {
    int n;
    do {
        printf("Nhập số lượng phần tử (n <= 10): ");
        scanf("%d", &n);
    } while(n > 10);
    int a[n];
    nhapMang(n, a);
    int tong = tongMax(n, a);
    printf("Tổng các cực đại địa phương của dãy là: %d\n", tong);
    return 0;
}

