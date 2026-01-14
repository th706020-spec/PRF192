//1. khai bao a,b so nguyen
//2. khai bao bien ket qua
//hay in ket qua: +,-,*,/ cua a,b
//vd:
//a = 7
//b = 2
//7 + 2 = 9
//7 - 2 = 5
//7 * 2 = 14
//7 / 2 = 3.50
#include <stdio.h>

int main(){
	int a = 7;
	int b = 2;
	int kq;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("a + b = %d\n", a + b );
	printf("a - b = %d\n", a - b );
	printf("a * b = %d\n", a * b );
	printf("a / b = %.2f\n", (float) a/b );	
}