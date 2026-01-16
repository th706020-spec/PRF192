#include <stdio.h>
int main(){
	float soThuc;
	int phanNguyen;
	float phanThuc;
	printf("nhap so thuc:");
	scanf("%f", &soThuc);
	printf("gia tri da nhap: %.4f\n", soThuc);
	phanNguyen = (int)soThuc;
	printf("phan nguyen la: %d\n", phanNguyen);
	phanThuc = soThuc - phanNguyen;
	printf("phan thuc la: %0.4f\n", phanThuc);
}