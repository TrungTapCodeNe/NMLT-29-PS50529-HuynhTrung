#include <stdio.h>
int main(){
    int toan, ly, hoa;
    printf("Nhap diem toan, ly, hoa: ");
    scanf("%d%d%d",&toan,&ly,&hoa);
    
    float dtb = (toan*3 + ly*2 + hoa)/6.0;

    printf("Diem toan: %d\n Diem hoa: %d\n Diem ly: %d\n Diem trung binh: %.2f",toan,ly,hoa,dtb);
    return 0;
    
}