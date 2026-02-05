#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int ranDom,n;
	srand(time(NULL));
    ranDom = rand() % 10 + 1;
    
    while (n != ranDom){
		printf ("ban doan so di tu 1 den 10: ");
		while (scanf (" %d", &n) != 1 || n<=0){
			printf("nhap sai, nhap lai: ");
			fflush(stdin);
			//while(getchar() != '\n');
		}
		if (n < ranDom)
			printf("ban doan sai roi, doan so lon hon di\n");
		else if (n > ranDom)
			printf("ban doan sai roi, doan so be hon di\n");
	}
	if (n == ranDom)
		printf("doan dung roi");
}