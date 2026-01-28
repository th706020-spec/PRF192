#include <stdio.h>
#include <math.h>

int main(){
	float dcc,dgk,dck,kq,td;
	printf("nhap diem diem chuyen can: ");
	kq = scanf("%f", &dcc);
	if (kq == 0 || dcc<0 || dcc>10){
		printf("nhap sai");
		return 0;
	}
	printf("nhap diem diem giua ky: ");
	kq = scanf("%f", &dgk);
	if (kq == 0 || dgk<0|| dgk>10){
		printf("nhap sai");
		return 0;
	}
	printf("nhap diem diem cuoi ky: ");
	kq = scanf("%f", &dck);
	if (kq == 0 || dck<0|| dck>10){
		printf("nhap sai");
		return 0;
	}
	}
	td = ((dcc * 10/100) + (dgk * 30/100) + (dck * 60/100));
	printf("diem tong ket cua ban la: %.2f\n", td);
	if (td>=8.5 && td<=10) {
		printf("ban tot nghiep loai A\n");
		printf("ban du dieu kien tot nghiep\n");
	}
	else if (td>=7 && td<=8.4){
		printf("ban tot nghiep loai B\n");
		printf("ban du dieu kien tot nghiep\n");
	}
	else if (td>=5.5 && td<=6.9){
		printf("ban tot nghiep loai C\n");
		printf("ban du dieu kien tot nghiep\n");
	}
	else if (td>=4 && td<=5.4){
		printf("ban tot nghiep loai D\n");
		printf("ban du dieu kien tot nghiep\n");
	}
	if (dcc<4 || dgk<4 || dck<4){
		printf("khong du dieu kien tot nghiep");
		printf("ban tot nghiep loai F ");
	}
	printf("|%-20s|%-20s|%-20s\n", "diem chuyen can","diem giua ky","diem cuoi ky");
	printf("|%-20.3f|%-20.3f|%-20.3f",dcc,dgk,dck);
}