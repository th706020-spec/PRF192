#include <stdio.h>
#include <math.h>

int main(){
	float dcc,dgk,dck,kq,td;
	char dc;
	printf("nhap diem chuyen can,giua ky,cuoi ky: ");
	kq = scanf("%f,%f,%f", &dcc,&dgk,&dck);
	if (kq == 0 || dcc<0 || dcc>10 || dgk<0|| dgk>10 || dck<0|| dck>10){
		printf("nhap sai");
		return 0;
	}
	td = ((dcc * 10/100) + (dgk * 30/100) + (dck * 60/100));
	printf("diem tong ket cua ban la: %.2f\n", td);
	if (td>=8.5) {
		dc = 'A';
	}
	else if (td>=7){
		dc = 'B';
	}
	else if (td>=5.5){
		dc = 'C';
	}
	else if (td>=4){
		dc = 'D';
	}
	if (dcc<4 || dgk<4 || dck<4){
		dc = 'F';
		printf("khong du dieu kien tot nghiep\n");
	}
	else{
		printf ("du dieu kien tot nghiep\n");
		printf ("tot nghiep loai %c\n", dc);
	}
	printf("|%-20s|%-20s|%-20s|%-20s\n", "diem chuyen can","diem giua ky","diem cuoi ky","diem chu");
	printf("|%-20.3f|%-20.3f|%-20.3f|%-20c",dcc,dgk,dck,dc);
}