#include <stdio.h>
int main(){
  // nhu cau nhap a,b. tinh nghiem x
  int a,b;
  float x;
  printf("nhap a,b: ");
  scanf("%d%d", &a,&b);

  x = -(float)b/a;
  printf("Phuong trinh %dX + %d = 0 co nghiem x =%.2f",a,b,x);
  return 0;
}