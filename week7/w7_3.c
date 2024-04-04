#include <stdio.h>

int main() {
	int chieucao;
	scanf("%d", &chieucao);
	for (int i = 0; i < chieucao; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
		
