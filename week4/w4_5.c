#include <stdio.h>
void main() {
    char name[30], id[10], dateofbirth[15], major[30], faculty[30];
    int cohort;
    printf("Nhap thong tin sinh vien: \n");
    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("ID: ");
    fgets(id, sizeof(id), stdin);
    id[strlen(id) - 1] = '\0';
    printf("Date of Bitrh: ");
    fgets(dateofbirth, sizeof(dateofbirth), stdin);
    dateofbirth[strlen(dateofbirth) - 1] = '\0';
    printf("Major: ");
    fgets(major, sizeof(major), stdin);
    major[strlen(major) - 1] = '\0';
    printf("Faculty: ");
    fgets(faculty, sizeof(faculty), stdin);
    faculty[strlen(faculty) - 1] = '\0';
    printf("Cohort: ");
    scanf("%d", &cohort);
    printf("\nStudent information:\n");
    printf("Name: %s\n", name);
    printf("ID: %s\n", id);
    printf("Date of Birth: %s\n", dateofbirth);
    printf("Major: %s\n", major);
    printf("Faculty: %s\n", faculty);
    printf("Cohort: %d\n", cohort);
}

