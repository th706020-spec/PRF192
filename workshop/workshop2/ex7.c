#include <stdio.h>
#include <math.h>

int main(){
	int n,a = 0;
	printf ("nhap n: ");
	while (scanf (" %d", &n) != 1){
		printf("nhap lai n: ");
		fflush(stdin);
		//while(getchar() != '\n');
	}
	if (n == 0)
	printf("%d la so chinh phuong", n);
	while (a*a <= n) {
		if (a*a==n) {
			printf("%d la so chinh phuong", n);
			break;
		}
		a++;
	}
	if (a*a != n || n<0)
	printf("%d khong phai la so chinh phuong",n);
}