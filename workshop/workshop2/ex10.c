#include <stdio.h>
#include <math.h>

int main(){
	int luaChon;
	long long n = 100000000,a;
	while (1){
	printf("==========================================");
		printf("\n 	CAY ATM DAY \n");
        printf("1. rut tien\n");
        printf("2. thoat\n");
        while (scanf (" %d", &luaChon) != 1 || luaChon<=0){
		printf("nhap lai di: ");
		fflush(stdin);
		}
        switch (luaChon) {
        	case 1:{
        		if(n == 0){
					printf("so du cua ban = 0, khong the rut\n");
					return 0;
				}
        		printf ("so tien kha dung: %lld\n", n);
        		printf("nhap so tien muon rut: ");
				while (scanf("%lld", &a) == 0) {
                    printf("nhap lai so so tien muon rut: ");
                    while(getchar() != '\n');
                }
        		if (a<=n){
        			n = n - a;
        			printf("rut thanh cong so du hien tai la: %lld\n",n);
				}
				else{
					printf("so du khong du, so du hien tai la: %lld\n",n);
				}
				break;
			}
        	case 2:{
        		printf("khong thi thoi");
				return 0;
			}
			default: {
				printf("chon dung di ban oi !!\n");
				fflush (stdin);
				break;
			}
		}
	}
}