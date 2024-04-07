#include <stdio.h>

void tam_giac_nguoc_chieu(int chieucao, int i) {
	for (i = chieucao; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

void tam_giac_can(int chieucao, int i) {
	for (i = 0; i < chieucao; i++) {
		for(int j = 0; j <= chieucao-i; j++) {
			printf("  ");
		}
		for(int k = 1; k <= 2*i-1; k++) {
			printf("* ");
        }
        printf("\n");
	}
}

int main() {
	int chieucao, i;
	scanf("%d", &chieucao);
	tam_giac_nguoc_chieu(chieucao, i);
	tam_giac_can(chieucao, i);
	return 0;
}
