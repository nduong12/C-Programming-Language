#include <stdio.h>

int main() {
    int total_seconds;
    printf("Nhập số giây: ");
    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    printf("Thời gian tương ứng: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}

