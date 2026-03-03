#include <stdio.h>

float calculate_salary(float hours, float rate) {
    float total_salary = 0.0;

    if (hours <= 40) {
        total_salary = hours * rate;
    } else {
        float overtime_hours = hours - 40;
        total_salary = (40 * rate) + (overtime_hours * rate * 1.5);
    }

    return total_salary;
}

int main() {
    float hours, rate;

    while (1) {
        printf("Nhap so gio lam viec trong tuan: ");
        if (scanf("%f", &hours) == 1 && hours >= 0) {
            break;
        }
        printf("nhap sai!\n");
        while (getchar() != '\n');
    }

    while (1) {
        printf("Nhap muc luong 1 gio (VND): ");
        if (scanf("%f", &rate) == 1 && rate > 0) {
            break;
        }
        printf("nhap sai!\n");
        while (getchar() != '\n');
    }

    float salary = calculate_salary(hours, rate);
    printf("Tong luong nhan duoc la: %.03f VND\n", salary);

    return 0;
}