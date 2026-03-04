#include<stdio.h>
#include <math.h>
#define MAX 100
void doubleX(int x){
	x = x + x;	
}
void doubleX2(int *p){
	*p = *p + *p;
}
void inputArr(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]); 
    }
}
void outputArr(int a[], int n) {
    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
    }
    return 1;
}
}
int countPrimes(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i]) == 1) { 
            count++;
        }
    }
    return count;
}
int main(){
	int a[MAX];
    int n;
    do {
        printf("Nhap so luong phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    printf("\n--- BAT DAU NHAP MANG ---\n");
    inputArr(a, n);

    printf("\n--- KET QUA ---\n");
    outputArr(a, n);

    int primeCount = countPrimes(a, n);
    printf("-> So luong so nguyen to xuat hien trong mang la: %d\n", primeCount);

    return 0;
}