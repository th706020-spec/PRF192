#include <stdio.h>

int soSanh(int a,int b, int c) {
	if (a>b && a>c){
		return a;	
	}
	else if (b>a && b>c){
		return b;
	}
	else if (c>a && c>b){
		return c;
	}
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
	int a = nhapInt();
	int b = nhapInt();
	int c = nhapInt();
	int he = soSanh(a,b,c);
	printf("So lon nhat la: %d\n",he);
}