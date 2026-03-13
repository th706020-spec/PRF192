#include <stdio.h>
#include <stdlib.h>

void doiGiaTri (int* a, int* b, int*c){
	int temp = *b;
	*b = *a;
	*a = temp;
	temp = *c;
	*c = *a;
	*a = temp;
	
}

int main() {
    int a = 5;
    int b = 7;
    int c = 9;

	doiGiaTri (&a,&b,&c);
    printf("%d %d %d",a,b,c);

    printf("\n");
    system("pause");
    return(0);
}