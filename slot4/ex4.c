#include <stdio.h>
int main(){
	int a,b;
	char pt;
	float kq;
	printf("nhap a,b: ");
	scanf("%d,%d",&a,&b);
	printf("nhap phep toan:");
	scanf(" %c",&pt);
	if (b == 0){
		printf ("khong the chia cho 0\n");
	}
	else {
		kq = (float)a/b;
		printf("ket qua: %d %c %d = %.2f",a,pt,b,kq);
	}
}