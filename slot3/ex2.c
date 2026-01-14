//2. khai bao kieu ky tu kt, khoi gna gia tri cho bien nay
//in ra gia tri cua bien
//gia tri thap phan, gia tri hex, gia tri octal
//kich thuoc kieu du lieu bien kt
#include <stdio.h>

int main(){
	char kt = 'a',kt2= 'b',kt3='c';
	printf("%-17s|%-17s|%-17s|%-17s|%-17s|%-17s\n","ten bien","gia tri" ,"Dec", "Hex", "oct", "size");
	printf("%-17s|%-17d|%-17d|%-17x|%-17o|%-17d\n","kt",kt,kt ,kt , kt, sizeof(kt));
	printf("%-17s|%-17d|%-17d|%-17x|%-17o|%-17d\n","kt2",kt2,kt2 ,kt2 , kt2, sizeof(kt2));
	printf("%-17s|%-17d|%-17d|%-17x|%-17o|%-17d\n","kt3",kt3,kt3 ,kt3 , kt3, sizeof(kt3));
}