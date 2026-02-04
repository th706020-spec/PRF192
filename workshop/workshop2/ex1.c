#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf ("nhap vao n: ");
	while (scanf (" %d", &n) == 0 || n<=0 || n>1000){
		printf("nhap vao n: ");
		scanf("%d", &n);
		fflush(stdin);
		//while(getchar() != '\n');
	}
	printf ("can bac 2 cua n la %.2f", sqrt(n));
	
	
}