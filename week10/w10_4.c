#include <stdio.h>

void nhapMang(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void inMang(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void saoChepSoDuong(int n, int a[], int *m, int b[]) {
    *m = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
            b[(*m)++] = a[i];
        }
    }
}

void saoChepSoAm(int n, int a[], int *m, int c[]) {
    *m = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            c[(*m)++] = a[i];
        }
    }
}

int main() {
    int n;
    do {
        printf("Nhập số lượng phần tử (n <= 10): ");
        scanf("%d", &n);
    } while(n > 10);
    int a[n], b[n], c[n];
    int count_b, count_c;
    nhapMang(n, a);
    saoChepSoDuong(n, a, &count_b, b);
    printf("Mảng b gồm các số dương: ");
    inMang(count_b, b);
    saoChepSoAm(n, a, &count_c, c);
    printf("Mảng c gồm các số âm: ");
    inMang(count_c, c);
    return 0;
}

