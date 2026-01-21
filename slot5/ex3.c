#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,max;
	printf("nhap a,b,c: ");
	scanf("%f,%f,%f",&a,&b,&c);
	if (a>b && a>c)
		max = a;
	else {
		if (b>c && b>a)
			max = b;
		else
			max = c;
	}
	printf("so lon nhat la: %f", max);

}