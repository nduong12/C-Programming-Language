#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char hang[11];
    char ma[21];
    char chip[4];
    int ram;
    float gia;
} MayTinh;

void nhap(MayTinh *mt) {
    printf("Nhap hang san xuat: ");
    scanf("%s", mt->hang);
    printf("Nhap chip: ");
    scanf("%s", mt->chip);
    printf("Nhap RAM: ");
    scanf("%d", &mt->ram);
    printf("Nhap gia ban: ");
    scanf("%f", &mt->gia);
}

void taoMa(MayTinh *mt) {
    char ram[5];
    sprintf(ram, "%d", mt->ram);
    strcpy(mt->ma, mt->hang);
    strcat(mt->ma, ".");
    strcat(mt->ma, mt->chip);
    strcat(mt->ma, ".");
    strcat(mt->ma, ram);
}

void sapXep(MayTinh *ds, int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (ds[i].gia > ds[j].gia) {
                MayTinh temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
}

void inMayTinh(MayTinh *ds, int n) {
    printf("Stt – Ma – Chip – RAM - Gia\n");
    for (int i = 0; i < n; i++)
        if (strcmp(ds[i].hang, "Asus") == 0 && (strcmp(ds[i].chip, "i5") == 0 || strcmp(ds[i].chip, "i7") == 0) && ds[i].ram >= 8 && ds[i].gia < 25)
            printf("%d - %s - %s – %d - %.2f\n", i+1, ds[i].ma, ds[i].chip, ds[i].ram, ds[i].gia);
}

int main() {
    MayTinh ds[100];
    int n = 0;
    char ch;
    do {
        nhap(&ds[n]);
        taoMa(&ds[n]);
        n++;
        printf("Ban co muon nhap them may tinh khong (y/n)? ");
        scanf(" %c", &ch);
    } while (ch == 'y');
    sapXep(ds, n);
    inMayTinh(ds, n);
    return 0;
}
