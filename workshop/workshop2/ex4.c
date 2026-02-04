#include <stdio.h>
#include <math.h>

int main(){
	int n,a;
	int kq = 0;
	printf ("nhap n: ");
	while (scanf (" %d", &n) != 1 || n<=0){
		printf("nhap vao n: ");
		fflush(stdin);
		//while(getchar() != '\n');
	}
	while (n>0) {
		a = n % 10;
		kq = kq *10+a;
		n=n/10;
	}
	printf("%d",kq);
}