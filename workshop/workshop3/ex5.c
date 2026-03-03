#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return 0;
    
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;

    while (1) {
        while (1) {
            printf("Nhap a: ");
            if (scanf("%d", &a) == 1) {
                while (getchar() != '\n');
                break;
            }
            printf("nhap sai\n");
            while (getchar() != '\n');
        }

        while (1) {
            printf("Nhap b: ");
            if (scanf("%d", &b) == 1) {
                while (getchar() != '\n');
                break;
            }
            printf("nhap sai\n");
            while (getchar() != '\n');
        }

        if (a <= b) {
            break; 
        }
        
        printf("nhap lai a nho hon hoac bang b\n\n");
    }

    printf("Cac so nguyen to trong khoang tu %d den %d la:\n", a, b);
    bool found = 0;

    for (int i = a; i <= b; i++) {
        if (i != 2 && i % 2 == 0) {
            continue;
        }

        if (is_prime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Khong co so nguyen to nao!");
    }
    printf("\n");

    return 0;
}