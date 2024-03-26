#include <stdio.h>
#include <stdlib.h>

void nhapMang(int n, int array[]) {
    for(int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

void inMang(int n, int array[]) {
    printf("Dãy số: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortAsc(int n, int array[]) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(array[j] > array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void bubbleSortDesc(int n, int array[]) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(array[j] < array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void bubbleSortAbsDesc(int n, int array[]) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(abs(array[j]) < abs(array[j+1])) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

int main() {
    int n;
    do {
        printf("Nhập số lượng phần tử (n <= 10): ");
        scanf("%d", &n);
    } while(n > 10);
    int array[n];
    nhapMang(n, array);
    bubbleSortAsc(n, array);
    printf("Dãy số sau khi sắp xếp tăng dần: ");
    inMang(n, array);
    bubbleSortDesc(n, array);
    printf("Dãy số sau khi sắp xếp giảm dần: ");
    inMang(n, array);
    bubbleSortAbsDesc(n, array);
    printf("Dãy số sau khi sắp xếp giảm dần theo giá trị tuyệt đối: ");
    inMang(n, array);
    return 0;
}

