#include <stdio.h>
#include <math.h>

int main(){
	int a,b,soDu;
	printf ("nhap a: ");
	while (scanf (" %d", &a) != 1){
		printf("nhap lai: ");
		fflush(stdin);
		//while(getchar() != '\n');
	}
	printf ("nhap b: ");
	while (scanf (" %d", &b) != 1){
		printf("nhap lai: ");
		fflush(stdin);
	}
	while (b != 0) {
		soDu = a % b;
		a = b;
		b = soDu;
	}
	printf("uoc chung lon nhat cua a va b la: %d",a);
}