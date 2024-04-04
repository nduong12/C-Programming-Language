#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>
#define N 100
//Dinh nghia kieu du lieu moi co ten MT
typedef struct MT {
    char hangsx[10];
    char ma[20];
    char chip[3];
    int ram;
    float gia;
} MT;
//Ham kiem tra nhap lieu Chip
void nhapchip(char *chip){
    int lcc;
    do {
        printf("Moi ban chon loai chip: 1/ i3; 2/ i5; 3/ i7: ");
        scanf("%d",&lcc);
        if(lcc<1 || lcc > 3)
            printf("Ban chon khong hop le, moi nhap lai!\n");
    }while(lcc<1 || lcc > 3);
    switch(lcc){
        case 1: strcpy(chip,"i3"); break;
        case 2: strcpy(chip,"i5"); break;
        case 3: strcpy(chip,"i7"); break;
    }
}
//Ham kiem tra nhap thong tin ram
int ttram(){
    int ram;
    do{
        printf("Moi ban nhap vao thong tin RAM (chia het cho 4): ");
        scanf("%d",&ram);
        if(ram%4 != 0) {
            printf("Ban phai nhap gia tri RAM la so tu nhien chia het cho 4\n");
            printf("Moi ban nhap lai!!!\n");
        }
    }while(ram%4 != 0);
    return ram;
}
//Ham kiem tra gia ban
float nhapgia(){
    float gia;
    do{
        printf("Moi ban nhap vao gia (lon hon 0): ");
        scanf("%f",&gia);
        if(gia<0) {
            printf("Ban phai nhap gia lon hon 0\n");
            printf("Moi ban nhap lai!!!\n");
        }
    }while(gia < 0);
    return gia;
}
//Ham nhap du lieu cho N san pham
int nhapdl(MT *dsmt){
    char ch,hsx[10];
    int i = 0, lcc;
    float g;
    do{
        printf("Ban co muon nhap du lieu cho mot may tinh moi (y/n)?: ");
        __fpurge(stdin);
        ch = getchar();
        if(ch == 'n' || ch == 'N') break;
        //Hang san xuat
        printf("Moi ban nhap hang san xuat: ");
        __fpurge(stdin);
        fgets(hsx,sizeof(hsx),stdin);
        hsx[strlen(hsx)-1] = '\0';
        strcpy(dsmt[i].hangsx,hsx);
        //Nhap Chip
        nhapchip(dsmt[i].chip);
        //Nhap thong tin ram
        dsmt[i].ram = ttram();
        //Nhap thong tin gia
        g = nhapgia();
        dsmt[i].gia = g;
        i++;
    }while(1);
    return i;
}
//Ham tao ma cho may tinh
void taoma(MT *dsmt, int somt){
    char str[5];
    for(int i = 0; i < somt; i++) {
        strcpy(dsmt[i].ma,"");
        strcat(dsmt[i].ma,dsmt[i].hangsx);
        strcat(dsmt[i].ma,".");
        strcat(dsmt[i].ma,dsmt[i].chip);
        strcat(dsmt[i].ma,".");
        sprintf(str,"%d",dsmt[i].ram);
        strcat(dsmt[i].ma,str);
    }
}
//Ham in thong tin danh sach may tinh
void inthongtin(MT *dsmt, int somt){
    for(int i=0; i<somt;i++)
        printf("%d - %s - %s - %d - %f\n",i+1,dsmt[i].ma, dsmt[i].chip,dsmt[i].ram,dsmt[i].gia);
}
//Ham sap xep theo gia tang dan
void sapxeptheogia(MT *dsmt, int somt){
    for(int i = 0; i< somt; i++)
        for(int j = i+1; j < somt; j++)
            if(dsmt[i].gia > dsmt[j].gia){
                MT temp;
                temp = dsmt[i];
                dsmt[i] = dsmt[j];
                dsmt[j] = temp;
            }
}
//Chuong trinh chinh
void main(){
    MT dsmt[N];
    int somt;
    system("clear");
    somt = nhapdl(dsmt);
    taoma(dsmt, somt);
    inthongtin(dsmt,somt);
    printf("Sap xep theo gia:\n");
    sapxeptheogia(dsmt,somt);
    inthongtin(dsmt,somt);
}
