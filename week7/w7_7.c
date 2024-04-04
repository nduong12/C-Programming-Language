#include <stdio.h>

int main(){
	int n, i, tong=0;
	scanf("%d", &n);

	for (i=0; i<=n; i++) {
		tong += i;
	}
	printf("Tong tu 1 den %d = %d\n", n, tong);
	return 0;
}
