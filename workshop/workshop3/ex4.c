#include <stdio.h>

float tinhTong(int a, int b) { return a + b; }
float tinhHieu(int a, int b) { return a - b; }
float tinhTich(int a, int b) { return a * b; }
float tinhThuong(int a, int b) { return (float) a / b; }

void show_menu() {
    printf("\n======================\n");
    printf("     MAY TINH       \n");
    printf("======================\n");
    printf(" +. Phep cong\n");
    printf(" -. Phep tru\n");
    printf(" *. Phep nhan\n");
    printf(" /. Phep chia\n");
    printf(" 0. Thoat\n");
    printf("============================\n");
}

int processor() {
    char choice;
    float a, b, kq;

    printf("chon di: ");
    scanf(" %c", &choice);
    
    while (getchar() != '\n');

    if (choice == '0') {
        printf("Da thoat chuong trinh.\n");
        return 0; 
    }

    if (choice != '+' && choice != '-' && choice != '*' && choice != '/') {
        printf("chon sai!\n");
        return 1;
    }

    while (1) {
        printf("Nhap so thu nhat: ");
        if (scanf("%f", &a) == 1) {
            while (getchar() != '\n');
            break;
        }
        printf("nhap sai\n");
        while (getchar() != '\n');
    }

    while (1) {
        printf("Nhap so thu hai: ");
        if (scanf("%f", &b) == 1) {
            while (getchar() != '\n');
            break;
        }
        printf("nhap sai\n");
        while (getchar() != '\n');
    }

    switch (choice) {
        case '+':
            kq = tinhTong(a, b);
            printf("Ket qua: %.2f + %.2f = %.2f\n", a, b, kq);
            break;
        case '-':
            kq = tinhHieu(a, b);
            printf("Ket qua: %.2f - %.2f = %.2f\n", a, b, kq);
            break;
        case '*':
            kq = tinhTich(a, b);
            printf("Ket qua: %.2f * %.2f = %.2f\n", a, b, kq);
            break;
        case '/':
            if (b == 0) {
                printf("Loi: Khong the chia cho 0!\n");
            } else {
                kq = tinhThuong(a, b);
                printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, kq);
            }
            break;
    }
    
    return 1;
}

int main() {
    int is_running = 1;
    do {
        show_menu();
        is_running = processor();
    } while (is_running != 0);

    return 0;
}