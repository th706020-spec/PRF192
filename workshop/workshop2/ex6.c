#include <stdio.h>
#include <math.h>

int main(){
	int soThapPhan,soDu;
	int kq = 0;
	int a = 1;
	printf ("nhap so thap phan: ");
	while (scanf (" %d", &soThapPhan) != 1 || soThapPhan<=0){
		printf("nhap sai, nhap lai: ");
		fflush(stdin);
		//while(getchar() != '\n');
	}
	while (soThapPhan>0) {
		soDu = soThapPhan % 2;
		kq = kq +(soDu*a);
		soThapPhan = soThapPhan / 2;
		a = a * 10;
	}
	printf("%d",kq);
}