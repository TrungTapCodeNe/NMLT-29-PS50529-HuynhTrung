#include <stdio.h>

int main(){
    int giaTuan = 1300;
    int soNgay;

    int soTuan, soNgayLe;
    printf("Nhap so ngay o ks: ");
    scanf("%d", &soNgay);
    soTuan = soNgay/7;
    soNgayLe = soNgay%7;
    printf("So ngay: %d\n So tuan: %d\n So ngay le: %d\n Tong tien: %d\n", soNgay, soTuan, soNgayLe, soTuan*giaTuan + soNgayLe*200);
    return 0;
}