#include <stdio.h>

void nhapMang(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int areArraysEqual(int a[], int b[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Nhập các phần tử của mảng thứ nhất:\n");
    nhapMang(n, a);
    printf("Nhập các phần tử của mảng thứ hai:\n");
    nhapMang(n, b);
    if(areArraysEqual(a, b, n)) {
        printf("Hai mảng bằng nhau.\n");
    } else {
        printf("Hai mảng không bằng nhau.\n");
    }
    return 0;
}

