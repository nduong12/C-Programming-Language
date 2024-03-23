#include <stdio.h>

#define MONTHS 12

void printRainfall(int rainfall[]) {
    printf("Thang\tLuong mua (mm)\n");
    for (int i = 0; i < MONTHS; i++) {
        printf("%d\t%d\n", i + 1, rainfall[i]);
    }
}

int main() {
   
    int rainfall[MONTHS] = {45, 95, 30, 130, 220, 210, 185, 135, 80, 40, 45, 40};

    printRainfall(rainfall);

    return 0;
}

