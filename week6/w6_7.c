#include <stdio.h>
int main()
{
    int thang;
    printf("Nhap vao mot thang trong nam: ");
    scanf("%d", &thang);
    switch(thang)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang %d co 31 ngay.", thang);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang %d co 30 ngay.", thang);
            break;
        case 2:
            printf("Nam do co bao nhieu ngay? ");
            int nam;
            scanf("%d", &nam);
            if((nam%4==0 && nam%100!=0) || nam%400==0)
                printf("Thang %d co 29 ngay.", thang);
            else
                printf("Thang %d co 28 ngay.", thang);
            break;
        default:
            printf("Thang khong hop le.");
    }
    return(0);
}

