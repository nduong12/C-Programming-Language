#include <stdio.h>
#include <string.h>

typedef struct {
    char tenHS[21];
    char maHS[9];
    int soPhach;
} ThiSinh;

typedef struct {
    int soPhach;
    float diem;
} DiemThi;

void nhapThiSinh(ThiSinh *ts) {
    printf("Nhap ten hoc sinh: ");
    fgets(ts->tenHS, 21, stdin);
    ts->tenHS[strcspn(ts->tenHS, "\n")] = 0;  // remove newline character
    printf("Nhap ma hoc sinh: ");
    fgets(ts->maHS, 9, stdin);
    ts->maHS[strcspn(ts->maHS, "\n")] = 0;  // remove newline character
    printf("Nhap so phach: ");
    scanf("%d", &ts->soPhach);
    getchar();  // remove newline character
}

void nhapDiemThi(DiemThi *dt) {
    printf("Nhap so phach: ");
    scanf("%d", &dt->soPhach);
    getchar();
    printf("Nhap diem: ");
    scanf("%f", &dt->diem);
    getchar();
}

void sapXepTheoSoPhach(ThiSinh *ts, DiemThi *dt, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (ts[i].soPhach > ts[j].soPhach) {
                ThiSinh tempTS = ts[i];
                ts[i] = ts[j];
                ts[j] = tempTS;
            }
            if (dt[i].soPhach > dt[j].soPhach) {
                DiemThi tempDT = dt[i];
                dt[i] = dt[j];
                dt[j] = tempDT;
            }
        }
    }
}

void inKetQuaThi(ThiSinh *ts, DiemThi *dt, int n) {
    printf("\n%-6s %-8s %-20s %5s\n", "STT", "MaHS", "Ho va Ten", "Diem");
    for (int i = 0; i < n; i++) {
        printf("%-6d %-8s %-20s %5.2f\n", i+1, ts[i].maHS, ts[i].tenHS, dt[i].diem);
    }
}

int main() {
    int n;
    printf("Nhap so thi sinh: ");
    scanf("%d", &n);
    getchar();  // remove newline character

    ThiSinh ts[n];
    DiemThi dt[n];
    for (int i = 0; i < n; i++) {
        nhapThiSinh(&ts[i]);
        nhapDiemThi(&dt[i]);
    }

    sapXepTheoSoPhach(ts, dt, n);

    inKetQuaThi(ts, dt, n);

    return 0;
}

