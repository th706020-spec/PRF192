//ex 2. nhap vao so nguyen ab
//nhap vao 1 trong 5 phep toan
// case 1 +, case 2 -, case 3 *, case 4 /, case 5 %
#include <stdio.h>
#include <math.h>

int main(){
	int a ,b,ks;
	float kq;
	char pt,kc;
	ks = scanf(" %d,%d",&a,&b);
	if (ks != 2){
		printf("nhap sai");
		return 0;
	}
	fflush(stdin);
	kc= scanf(" %c",&pt);
	if (kc != 1 || (pt != '+' && pt != '-' && pt != '*' && pt != '/' && pt != '%')){
		printf("nhap sai");
		return 0;
	}
	switch(pt){
		case '+':
			kq= a+b;
			break;
		case '-':
			kq= a-b;
			break;
		case '*':
			kq= a*b;
			break;
		case '%':
			if (b == 0){
				printf ("khong the chia cho 0");
				return 0;
			}
			else {
			kq= a % b;
			break;
			}
		case '/':
			if (b == 0){
				printf ("khong the chia cho 0");
				return 0;
			}
			else {
			kq= (float)a / b;
			break;
			}
		}
		if (pt == '/' || pt == '%')
		printf ("%d %c %d = %.2f",a,pt,b,kq);
		else
		printf ("%d %c %d = %.0f",a,pt,b,kq);
}

