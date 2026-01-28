#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c;
	float max;
	printf("nhap a,b,c: ");
	scanf("%f,%f,%f",&a,&b,&c);
	max = a;
	if (b>max)
		max=b;
	if (c>max)
		max=c;
	printf("so lon nhat la: %.2f",max);
}