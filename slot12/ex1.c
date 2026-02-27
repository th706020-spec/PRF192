#include <stdio.h>

int tinhTong(int n) {
	int sum = 0;
	for (int i = 1; i<n; i++){
		if (n % i == 0){
			sum = sum + i;
		}
	}
	return sum;
}

int nhapInt(){
	int soInt;
	printf ("nhap int: ");
	while (scanf("%d", &soInt) != 1) {
    printf("nhap lai so int : ");
    while(getchar() != '\n');
	}
	return soInt;
}		
		
int main (){
	int n = nhapInt();	
	int sum = tinhTong(n);
	printf("Tong la: %d\n",sum);
}