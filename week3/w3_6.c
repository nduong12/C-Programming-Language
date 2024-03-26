#include<stdio.h>
#include <string.h>

int main(){
    char tensv1[30],quequansv1[30],tensv2[30],quequansv2[30],ch;
    int tuoisv1,tuoisv2;

    //Nhap thong tin cho sinh vien 1
    printf("Nhap vao thong tin sinh vien 1: ");
    printf("\n\t- Ten: ");
    fgets(tensv1,sizeof(tensv1),stdin);
    tensv1[strlen(tensv1)-1] = '\0';
    printf("\t- Que quan: ");
    fgets(quequansv1,sizeof(quequansv1),stdin);
    quequansv1[strlen(quequansv1)-1] = '\0';
    printf("\t- Tuoi: ");
    scanf("%d",&tuoisv1);
    //Xoa bo nho dem
    scanf("%c",&ch);

    //Nhap thong tin cho sinh vien 2
    printf("Nhap vao thong tin sinh vien 2: ");
    printf("\n\t- Ten: ");
    fgets(tensv2,sizeof(tensv2),stdin);
    tensv2[strlen(tensv2)-1] = '\0';
    printf("\t- Que quan: ");
    fgets(quequansv2,sizeof(quequansv2),stdin);
    quequansv2[strlen(quequansv2)-1] = '\0';
    printf("\t- Tuoi: ");
    scanf("%d",&tuoisv2);

    //Hien thi ket qua nhap du lieu ra man hinh dang bang
    printf("\nCac sinh vien da nhap vao: \n");
    printf("------------------------------------------------------------\n");
    printf("| %20s | %20s | %10s |\n","Ten","Que quan","Tuoi");
    printf("------------------------------------------------------------\n");
    printf("| %20s | %20s | %10d |\n",tensv1,quequansv1,tuoisv1);
    printf("------------------------------------------------------------\n");
    printf("| %20s | %20s | %10d |\n",tensv2,quequansv2,tuoisv2);
    printf("------------------------------------------------------------\n");

    return 0;
}


