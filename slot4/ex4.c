#include <stdio.h>
int main(){
	int a,b;
	char pt;
	float kq;
	printf("nhap a,b: ");
	scanf("%d,%d",&a,&b);
	printf("nhap phep toan:");
	fflush(stdin);//co the them dau cach truoc %c de tranh lay ky tu enter hoac dung getchar()
	scanf("%c",&pt);
	if(pt == '/'){
		if (b == 0)
			printf ("khong the chia cho 0\n");
		else {
			printf("sai phep chia roi");
			kq = (float)a/b;
			printf("ket qua: %d %c %d = %.2f",a,pt,b,kq);
		}
	}
}