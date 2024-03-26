#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GIA_TRI_MIN 2
#define GIA_TRI_MAX 12
#define SO_LAN_TUNG 100

int main() {
    int dem[GIA_TRI_MAX - GIA_TRI_MIN + 1] = {0};
    srand(time(NULL));
    for (int i = 0; i < SO_LAN_TUNG; i++) {
        int sucSac1 = rand() % 6 + 1;
        int sucSac2 = rand() % 6 + 1;
        int tong = sucSac1 + sucSac2;
        dem[tong - GIA_TRI_MIN]++;
    }
    for (int i = GIA_TRI_MIN; i <= GIA_TRI_MAX; i++) {
        printf("%d: %d\n", i, dem[i - GIA_TRI_MIN]);
    }
}

