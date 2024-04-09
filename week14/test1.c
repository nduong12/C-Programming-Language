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

void nhapThiSinh(ThiSinh *ts, int n) {
    for(int i = 0; i < n; i++) {
        printf("Nhap ten hoc sinh: ");
        fgets(ts[i].tenHS, 21, stdin);
        printf("Nhap ma hoc sinh: ");
        fgets(ts[i].maHS, 9, stdin);
        printf("Nhap so phach: ");
        scanf("%d", &ts[i].soPhach);
    }
}

void nhapDiemThi(DiemThi *dt, int n) {
    for(int i = 0; i < n; i++) {
        printf("Nhap so phach: ");
        scanf("%d", &dt[i].soPhach);
        printf("Nhap diem: ");
        scanf("%f", &dt[i].diem);
    }
}

void sapXep(ThiSinh *ts, DiemThi *dt, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(ts[i].soPhach > ts[j].soPhach) {
                ThiSinh temp = ts[i];
                ts[i] = ts[j];
                ts[j] = temp;
            }
            if(dt[i].soPhach > dt[j].soPhach) {
                DiemThi temp = dt[i];
                dt[i] = dt[j];
                dt[j] = temp;
            }
        }
    }
}

void inKetQua(ThiSinh *ts, DiemThi *dt, int n) {
    printf("STT\tMaThiSinh\tHo va Ten\tDiem\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%.1f\n", i+1, ts[i].maHS, ts[i].tenHS, dt[i].diem);
    }
}

int main() {
    int n;
    printf("Nhap so thi sinh: ");
    scanf("%d", &n);
    getchar();

    ThiSinh ts[n];
    DiemThi dt[n];

    nhapThiSinh(ts, n);
    nhapDiemThi(dt, n);

    sapXep(ts, dt, n);

    inKetQua(ts, dt, n);

    return 0;
}

