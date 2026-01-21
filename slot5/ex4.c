#include <stdio.h>
#include <math.h>

int main(){
	float nok,p;
	printf("nhap so dien da dung: ");
	scanf("%f",&nok);
	if (nok<=100 && nok>=0){
		p=nok*950;
		printf("gia = %.2f", p);
	}
	else if (nok<=150){
		p = (100 * 950) + ((nok - 100) * 1250);
		printf("gia = %.2f", p);
	}
	else if (nok<=200){
		p = (100 * 950) + (50 * 1250) + ((nok - 150) * 1350);
		printf("gia = %.2f", p);
	}
	else {
		p = (100 * 950) + (50 * 1250) + (50 * 1350) + ((nok - 200) * 1350);
		printf("gia = %.2f", p);
	}
		
	
}