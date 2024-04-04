#include <stdio.h>
int main() {
	int i, j=0;
	for (i = 0; i < 1000; i++) {
		if ((i/100 +i%10 == i/10%10) && (i % 3 == 0)) {
			printf("%d ", i);
			j++;
			if (j % 10 == 0) {
				printf("\n");
			}
		}
	}
	return 0;
}

