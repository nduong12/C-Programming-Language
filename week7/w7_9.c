#include <stdio.h>
int main() {
	int n;
	float tong = 0;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		tong += 1/i;
	}
	printf("Tong cua day so la: %.3f", tong);
	return 0;
}

