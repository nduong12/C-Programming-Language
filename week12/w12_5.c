#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double average(double* arr, int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

double* closestToAverage(double* arr, int size) {
    double avg = average(arr, size);
    double* closest = &arr[0];
    for(int i = 1; i < size; i++) {
        if(fabs(arr[i] - avg) < fabs(*closest - avg)) {
            closest = &arr[i];
        }
    }
    return closest;
}

int main() {
    double arr[] = {1.2, 2.3, 3.4, 4.5, 5.6};
    int size = sizeof(arr) / sizeof(arr[0]);

    double* closest = closestToAverage(arr, size);
    printf("Phan tu gan gia tri trung binh nhat la: %.1f", *closest);

    return 0;
}

