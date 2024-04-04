#include <stdio.h>

int main() {
	int n, choice, sum = 0;
	scanf("%d", &n);
	printf("Nhap lua chon:\n1. Tinh tong so chan\n2. Tinh tong so le\n");
	scanf("%d", &choice);
	
	switch(choice) {
		case 1: 
			for (int i = 2; i <= n; i += 2) {
				sum += i;
			}
			printf("Tong cac so chan tu 1 den %d = %d\n", n, sum);
		       	break;
		case 2:
			for (int i = 1; i <= n; i += 2) {
				sum += i;
			}
			printf("Tong cac so le tu 1 den %d = %d\n", n, sum);
			break;
		default:
			printf("Lua chon ko hop le\n");
	}
	return 0;
}
