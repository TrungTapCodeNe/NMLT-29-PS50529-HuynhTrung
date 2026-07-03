#include <stdio.h>

int main(){
    char mssv[20];
    char hoTen[50];
    int namSinh;
    float dtb;
    int tuoi;

    printf("Nhap MSSV: ");
    scanf("%s", mssv);

    while(getchar() != '\n'); // Xóa bộ đệm

    printf("Nhap ho ten: ");
    scanf("%[^\n]", hoTen);

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);

    tuoi = 2026 - namSinh;

    printf("\n---------------------\n");
    printf("MSSV: %s\n", mssv);
    printf("Ho ten: %s\n", hoTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", dtb);

    return 0;
}