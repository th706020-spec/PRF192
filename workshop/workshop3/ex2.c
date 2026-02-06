#include <stdio.h>
#include <math.h>

int main(){
    int soNguyenDuong;
    int kq = 0;
    printf("nhap so nguyen duong (nhap 0 de ket thuc): ");
    do{
	    while (scanf(" %d", &soNguyenDuong) != 1 || soNguyenDuong < 0){
	    	printf ("nhap sai nhap lai: ");
	    	while(getchar() != '\n');
	    }
	    if (soNguyenDuong != 0){
	    printf("nhap tiep so nguyen duong (nhap 0 de ket thuc): ");
	    kq = kq + soNguyenDuong; 
		}
	}while (soNguyenDuong != 0);
	printf("Tong la: %d", kq);
}