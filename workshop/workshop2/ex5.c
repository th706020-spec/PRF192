#include <stdio.h>
#include <math.h>

int main(){
    int soNguyenDuong;
    int kq = 0;
    printf("nhap so nguyen duong: ");
    while (1){
	    while (scanf(" %d", &soNguyenDuong) != 1 || soNguyenDuong < 0){
	    	printf ("nhap sai nhap lai: ");
	    	while(getchar() != '\n');
	    }
	    if (soNguyenDuong == 0)
	    break;
	    printf("nhap tiep so nguyen duong: ");
	    kq = kq + soNguyenDuong;    
	}
printf("Tong la: %d", kq);
}