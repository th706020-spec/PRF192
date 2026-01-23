#include <stdio.h>
#include <math.h>

int main(){
	float km,p,tx,tn,pt,xc,kq;
	printf("nhap so km di: ");
	kq = scanf("%f", &km);
	if (kq == 0 || km<0){
		printf("nhap sai");
		return 0;
	}
	printf("thoi gian xe cho ban (phut): ");
	scanf("%f",&xc);
	if (xc>5)
		pt = (xc - 5);
		printf ("tien cho la: %.3f\n", pt);
	if (km>=0){
		if (km<=0.5){
			p=12;
			printf("gia = %.3f nghin dong\n", p + pt);
		}
		else if (km<=30){
			p = 12 + ((km - 0.5) * 15);
			printf("gia = %.3f nghin dong\n", p + pt);
		}
		else {
			p = 12 + ((30-0.5) * 15) + ((km - 30) * 12);
			printf("gia = %.3f nghin dong\n", p + pt);
		}
	}
	printf("|%-16s|%-16s|%-16s\n", "so km","so phut cho","tong tien");
	printf("|%-16.3f|%-16.3f|%-16.3f", km,xc,p+pt );
}