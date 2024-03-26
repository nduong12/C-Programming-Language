#include <stdio.h>

void nhapMang(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void inMang(int n, int array[]) {
    printf("Dãy số đã nhập: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void tinhToan(int n, int array[]) {
    int count_zero = 0;
    float sum_positive = 0, sum_negative = 0;
    int count_negative = 0;
    for(int i = 0; i < n; i++) {
        if(array[i] < 0) {
            sum_negative += array[i];
            count_negative++;
        } else if(array[i] > 0) {
            sum_positive += array[i];
        } else {
            count_zero++;
        }
    }
    printf("Trung bình cộng các số âm: %.2f\n", sum_negative / count_negative);
    printf("Tổng các số dương: %.2f\n", sum_positive);
    printf("Số lượng số 0: %d\n", count_zero);
}

void timSoX(int n, int array[], int x) {
    printf("Vị trí các số trong dãy có giá trị bằng x: ");
    for(int i = 0; i < n; i++) {
        if(array[i] == x) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
}

int main() {
    int n;
    do {
        printf("Nhập số lượng phần tử (n < 10): ");
        scanf("%d", &n);
    } while(n >= 10);
    int array[n];
    nhapMang(n, array);
    inMang(n, array);
    tinhToan(n, array);
    int x;
    printf("Nhập một số x: ");
    scanf("%d", &x);
    timSoX(n, array, x);
    return 0;
}

