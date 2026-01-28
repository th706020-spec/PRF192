#include <stdio.h>
#include <math.h>

int main() {
	int x;
	printf("nhap x: ");
	scanf(" %d",&x);
	int preX=x;
	if (x<0) 
		x = -x;
	printf("|%d| = %d\n",preX,x);
	printf("can bat 2 = %.2f",sqrt(x));
}