#include <stdio.h>
#include <stdbool.h>

int main() {
	int a;
	scanf("%d", &a);
	if (a < 2) {
		printf("Khong phai la so nguyen to");
		return 0;
	}
	bool prime = true;
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			prime = false;
			break;
		}
	}

	if (prime) {
		printf("yes");
	} else {
		printf("no");
	}
	return 0;
}
