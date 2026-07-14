#include <stdio.h>
int main(){
    int namSinh;
    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    printf("Nam sinh cua ban la: %d\n Tuoi cua ban la: %d\n", namSinh, 2026 - namSinh);

    return 0;
}