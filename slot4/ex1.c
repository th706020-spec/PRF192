#include <stdio.h>
int main(){
	int a,b;
	printf("nhap a,b : ");
	int kq = scanf("%d%d",&a,&b);
	if(kq > 0){
		printf(" a= %d b=%d\n", a,b);
		printf("kq ham scanf %d\n", kq)
	}
	else
		printf("sai roi")
		
}