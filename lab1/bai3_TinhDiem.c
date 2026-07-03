#include <stdio.h>

int main(){
    char mssv[20];
    char hoTen[50];
    float diemToan, diemLy,diemHoa, diemTB;

    printf("Nhap MSSV: ");
    scanf("%s", mssv);

    while(getchar() != '\n'); // Xóa bộ đệm

    printf("Nhap ho ten: ");
    scanf("%[^\n]", hoTen);

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);
    
    diemTB = (diemToan * 2 + diemLy * 2 + diemHoa) / 6;
    printf("\n---------------------\n");
    printf("MSSV: %s\n", mssv);
    printf("Ho ten: %s\n", hoTen);
    printf("Diem trung binh: %.2f\n", diemTB);

    return 0;
}