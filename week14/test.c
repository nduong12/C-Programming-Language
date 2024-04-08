/*#include <stdio.h>
#include <string.h>

typedef struct {
    char name[21];
    int id;
    float score;
} Student;

void sort_students(Student* students, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(students[i].score < students[j].score) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong hoc sinh (n <= 10): ");
    scanf("%d", &n);
    getchar(); // remove newline character from input buffer

    Student students[n];
    for(int i = 0; i < n; i++) {
        printf("Nhap ten hoc sinh: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strlen(students[i].name) - 1] = '\0'; // remove newline character
        printf("Nhap ma hoc sinh: ");
        scanf("%d", &students[i].id);
        printf("Nhap diem tong ket: ");
        scanf("%f", &students[i].score);
        getchar(); // remove newline character from input buffer
    }

    sort_students(students, n);

    printf("STT\tMaHS\tHo va Ten\t\tDiem\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t%s\t\t%.2f\n", i + 1, students[i].id, students[i].name, students[i].score);
    }

    return 0;
}*/
#include <stdio.h>
#include <string.h>

/*typedef struct {
    char name[21];
    char id[7];
    float price;
    int quantity;
} Product;

void sort_products(Product* products, int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(products[i].id, products[j].id) > 0) {
                Product temp = products[i];
                products[i] = products[j];
                products[j] = temp;
            }
        }
    }
}

int main() {
    Product products[10];
    int n = 0;
    while(1) {
        printf("Nhap ten hang (nhap *** de ket thuc): ");
        fgets(products[n].name, sizeof(products[n].name), stdin);
        products[n].name[strlen(products[n].name) - 1] = '\0'; // remove newline character
        if(strcmp(products[n].name, "***") == 0) {
            break;
        }
        printf("Nhap ma hang: ");
        fgets(products[n].id, sizeof(products[n].id), stdin);
        products[n].id[strlen(products[n].id) - 1] = '\0'; // remove newline character
        printf("Nhap don gia: ");
        scanf("%f", &products[n].price);
        printf("Nhap so luong ban: ");
        scanf("%d", &products[n].quantity);
        getchar(); // remove newline character from input buffer
        n++;
    }

    sort_products(products, n);

    printf("STT\tMa hang\tTen hang hoa\tDon gia\tSo luong\tTong tien\n");
    float total = 0;
    for(int i = 0; i < n; i++) {
        float sum = products[i].price * products[i].quantity;
        if(sum > 500000) {
            printf("%02d\t%s\t%s\t%.2f\t%d\t%.2f\n", i + 1, products[i].id, products[i].name, products[i].price, products[i].quantity, sum);
            total += sum;
        }
    }
    printf("TONG CONG: %.2f VND\n", total);

    return 0;
}*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char tenHang[21];
    char maHang[7];
    float donGia;
    int soLuongBan;
} HangHoa;

void nhapHangHoa(HangHoa *hang) {
    printf("Nhap ten hang (nhap '***' de ket thuc): ");
    fgets(hang->tenHang, 21, stdin);
    hang->tenHang[strcspn(hang->tenHang, "\n")] = 0;  // remove newline character
    if (strcmp(hang->tenHang, "***") == 0) {
        return;
    }
    printf("Nhap ma hang: ");
    fgets(hang->maHang, 7, stdin);
    hang->maHang[strcspn(hang->maHang, "\n")] = 0;  // remove newline character
    printf("Nhap don gia: ");
    scanf("%f", &hang->donGia);
    printf("Nhap so luong ban: ");
    scanf("%d", &hang->soLuongBan);
    getchar();  // remove newline character
}

void sapXepTheoMaHang(HangHoa *hang, int n) {
    int i, j;
    HangHoa temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(hang[i].maHang, hang[j].maHang) > 0) {
                temp = hang[i];
                hang[i] = hang[j];
                hang[j] = temp;
            }
        }
    }
}

void inHangHoa(HangHoa *hang, int n) {
    int i;
    float tongCong = 0;
    printf("\n%-4s %-8s %-20s %-10s %-10s %-10s\n", "STT", "Ma hang", "Ten hang hoa", "Don gia", "So luong", "Tong tien");
    for (i = 0; i < n; i++) {
        float tongTien = hang[i].donGia * hang[i].soLuongBan;
        if (tongTien > 500000) {
            printf("%-4d %-8s %-20s %-10.2f %-10d %-10.2f\n", i+1, hang[i].maHang, hang[i].tenHang, hang[i].donGia, hang[i].soLuongBan, tongTien);
            tongCong += tongTien;
        }
    }
    printf("\nTONG CONG: %.2f VND\n", tongCong);
}

int main() {
    HangHoa hang[100];
    int i = 0;
    while (1) {
        nhapHangHoa(&hang[i]);
        if (strcmp(hang[i].tenHang, "***") == 0) {
            break;
        }
        i++;
    }

    sapXepTheoMaHang(hang, i);

    inHangHoa(hang, i);

    return 0;
}

