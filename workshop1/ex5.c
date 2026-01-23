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
	kq = scanf("%f", &xc);
	if (kq == 0 || xc<0){
		printf("nhap sai");
		return 0;
	}
	if (km>=0){
		if (km<=0.5){
			p=12;
		}
		else if (km<=30){
			p = 12 + ((km - 0.5) * 15);
		}
		else {
			p = 12 + ((30-0.5) * 15) + ((km - 30) * 12);
		}
		if (xc>5)
			p = (xc - 5) +p;
	}
	printf("|%-16s|%-16s|%-16s\n", "so km","so phut cho","tong tien");
	printf("|%-16.3f|%-16.3f|%-16.3f", km,xc,p );
}