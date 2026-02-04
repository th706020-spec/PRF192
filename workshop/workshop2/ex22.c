#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int count = 0;
	while (1){
		if (count < 5){
		printf ("nhap vao n: ");
		while (scanf (" %d", &n) != 1 || n<=0 || n>1000){
			printf("\n nhap vao n: ");
			scanf("%d", &n);
			fflush(stdin);
			//while(getchar() != '\n');
		}
	count ++;
	printf ("can bac 2 cua n la %.2f \n", sqrt(n));
		}
		else
		break;
	}
	printf("xuat sac");
}