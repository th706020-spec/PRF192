#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int count = 1;
	printf ("nhap n: ");
	while (scanf (" %d", &n) != 1 || n<=0 || n>10){
		printf("nhap vao n: ");
		fflush(stdin);
		//while(getchar() != '\n');
	}
	while (count <= 10){
		int kq = n * count;
		printf("%d x %d = %d\n",n,count,kq);
		count ++;
	}
}