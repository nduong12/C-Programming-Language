#include <stdio.h>

#define HANG 6
#define COT 4

int den[HANG][COT] = {0};
int congSuat[HANG][COT] = {
    {10, 15, 10},
    {15, 20, 15},
    {10, 15, 10},
    {15, 20, 15},
    {10, 15, 10}
};

void batTatHang(int hang) {
    for (int i = 1; i < COT; i++) {
        den[hang][i] = !den[hang][i];
    }
}

void batTatCot(int cot) {
    for (int i = 1; i < HANG; i++) {
        den[i][cot] = !den[i][cot];
    }
}

void batTatDen(int hang, int cot) {
    den[hang][cot] = !den[hang][cot];
}

int tinhCongSuat() {
    int congSuatTieuThu = 0;
    for (int i = 1; i < HANG; i++) {
        for (int j = 1; j < COT; j++) {
            if (den[i][j]) {
                congSuatTieuThu += congSuat[i][j];
            }
        }
    }
    return congSuatTieuThu;
}

void inDen() {
    for (int i = 1; i < HANG; i++) {
        for (int j = 1; j < COT; j++) {
            printf("%d ", den[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int luaChon;
    do {
        printf("1. Bat tat hang\n");
        printf("2. Bat tat cot\n");
        printf("3. Bat tat den\n");
        printf("4. Tinh cong suat tieu thu\n");
        printf("5. Thoat\n");
        scanf("%d", &luaChon);
        switch (luaChon) {
            case 1: {
                int hang;
                printf("Nhap hang: ");
                scanf("%d", &hang);
                batTatHang(hang);
                inDen();
                break;
            }
            case 2: {
                int cot;
                printf("Nhap cot: ");
                scanf("%d", &cot);
                batTatCot(cot);
                inDen();
                break;
            }
            case 3: {
                int hang, cot;
                printf("Nhap hang va cot: ");
                scanf("%d %d", &hang, &cot);
                batTatDen(hang, cot);
                inDen();
                break;
            }
            case 4: {
                int congSuatTieuThu = tinhCongSuat();
                printf("Cong suat tieu thu: %d W\n", congSuatTieuThu);
                break;
            }
            case 5:
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (luaChon != 5);
}
