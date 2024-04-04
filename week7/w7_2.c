#include <stdio.h>

int main() {
	char tenKH[50];
	float so_tien_gui, lai_suat_thang, lai_suat_nam, tong_lai;
	int thang;

	puts("Nhap ten khach hang: ");
	gets(tenKH);

	printf("Nhap so tien gui: ");
	scanf("%f", &so_tien_gui);

	printf("Nhap lai suat hang thang: ");
	scanf("%f", &lai_suat_thang);

	lai_suat_nam = lai_suat_thang/100;
	tong_lai = 0;

	printf("\nTai khoan khach hang: %s\n", tenKH);
	printf("%-10s %-15s %-15s %-10s\n", "Thang", "Tien dau ky", "Tien lai", "So du");

	for (thang = 1; thang <= 12; thang++) {
		float tien_lai = so_tien_gui*lai_suat_nam;
		tong_lai += tien_lai;
		so_tien_gui += tien_lai;
		printf("%-10d %-15.2f %-15.2f %-10.2f\n", thang, so_tien_gui-tien_lai, tien_lai, so_tien_gui);
	}
	printf("Tong lai: %.2f\n", tong_lai);
	return 0;
}
