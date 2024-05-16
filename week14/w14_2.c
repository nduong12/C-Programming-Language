#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[21];
    int maHS;
    float diemTK;
} HocSinh;

void nhap(HocSinh *hs) {
    printf("Nhap ten hoc sinh: ");
    fgets(hs->ten, 21, stdin);
    hs->ten[strcspn(hs->ten, "\n")] = 0; 
    printf("Nhap ma hoc sinh: ");
    scanf("%d", &hs->maHS);
    printf("Nhap diem tong ket: ");
    scanf("%f", &hs->diemTK);
}

void in(HocSinh hs) {
    printf("%-20s %10d %10.2f\n", hs.ten, hs.maHS, hs.diemTK);
}

void sapXep(HocSinh *hs, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (hs[i].diemTK < hs[j].diemTK) {
                HocSinh temp = hs[i];
                hs[i] = hs[j];
                hs[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so hoc sinh: ");
    scanf("%d", &n);
    getchar();  

    HocSinh hs[n];
    for (int i = 0; i < n; i++) {
        nhap(&hs[i]);
        getchar();  
    }

    sapXep(hs, n);

    printf("\n%-20s %10s %10s\n", "Ten", "MaHS", "DiemTK");
    for (int i = 0; i < n; i++) {
        in(hs[i]);
    }

    return 0;
}

