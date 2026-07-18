#include <stdio.h>
#define PI 3.14159
const float PI2 = 3.14159;
int main(){
    float dai, rong, chuViHCN, dienTichHCN, r, chuViHT, dienTichHT;
    printf("Nhap chieu dai, chieu rong: ");
    scanf("%f%f", &dai, &rong);
    chuViHCN = (dai + rong) * 2;
    dienTichHCN = dai * rong;
    printf(" Dai: %.2f\n Rong: %.2f\n Chu Vi HCN: %.2f\n Dien Tich HCN: %.2f\n", dai, rong, chuViHCN, dienTichHCN);
    
    printf("Nhap ban kinh: ");
    scanf("%f", &r);
    chuViHT = r * 2 * PI;
    dienTichHT = r * r * PI2;
    printf(" Hinh tron \n Ban kinh: %.2f\n Chu vi HT: %.2f\n Dien tich HT: %.2f\n", r, chuViHT, dienTichHT);
    return 0;
}