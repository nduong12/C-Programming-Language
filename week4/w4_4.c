
#include <stdio.h>
int main() {
    char title[50], isbn[25];
    float price;
    int quantity;
    printf("BK Bookseller\n");
    printf("Ten sach: ");
    fgets(title, sizeof(title), stdin);
    title[strlen(title) - 1] = '\0';
    
    printf("Gia sach: ");
    scanf("%f", &price);
    printf("So luong sach: ");
    scanf("%d", &quantity);
    printf("Ma sach: ");
    scanf("%s", &isbn);
    printf("Hoa don\n");
    
    printf("%-5s %-15s %-18s %-10s %-10s\n", "Qty", "ISBN", "Title", "Price", "Total");
    printf("%-5d %-15s %-18s %-10.2f %-10.2f\n", quantity, isbn, title, price, quantity * price);
    printf("VAT: %10.2f\n", 0.05 * quantity * price);
    printf("You pay: %10.2f\n", 1.05 * quantity * price);
    return 0;
}
