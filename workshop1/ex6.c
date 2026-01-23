#include <stdio.h>
#include <math.h>

int main(){
	float dcc,dgk,dck,kq,td;
	printf("nhap diem dcc: ");
	kq = scanf("%f", &dcc);
	if (kq == 0 || dcc<0 || dcc>10){
		printf("nhap sai");
		return 0;
	}
	printf("nhap diem dgk: ");
	kq = scanf("%f", &dgk);
	if (kq == 0 || dgk<0|| dgk>10){
		printf("nhap sai");
		return 0;
	}
	printf("nhap diem dck: ");
	kq = scanf("%f", &dck);
	if (kq == 0 || dck<0|| dck>10){
		printf("nhap sai");
		return 0;
	}
	if (dcc<4 || dgk<4 || dck<4){
		printf("khong du dieu kien tot nghiep");
		return 0;
	}
	td = ((dcc * 10/100) + (dgk * 30/100) + (dck * 60/100));
	if (td>=8.5 && td<=10) {
		printf("ban tot nghiep loai A");
	}
	else if (td>=7 && td<=8.4){
		printf("ban tot nghiep loai B");
	}
	else if (td>=5.5 && td<=6.9){
		printf("ban tot nghiep loai C");
	}
	else if (td>=4 && td<=5.4){
		printf("ban tot nghiep loai D");
	}
	else {
		printf("ban tot nghiep loai F va ban khong du dieu kien tot nghiep");
	}
}