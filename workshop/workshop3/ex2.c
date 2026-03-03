#include <stdio.h>

float calculate_taxi_fare(float distance) {
    float total_fare = 0.0;

    if (distance <= 0) {
        return 0.0;
    } else if (distance <= 1) {
        total_fare = 15000;
    } else if (distance <= 30) {
        total_fare = 15000 + (distance - 1) * 12000;
    } else {
        total_fare = 15000 + (29 * 12000) + (distance - 30) * 10000;
    }

    return total_fare;
}

int main() {
    float distance;

    while (1) {
        printf("Nhap quang duong da di (km): ");
        if (scanf("%f", &distance) == 1 && distance >= 0) {
            break;
        }
        printf("nhap sai\n");
        while (getchar() != '\n');
    }

    float fare = calculate_taxi_fare(distance);
    printf("Tien cuoc cho %.2f km la: %.0f VND\n", distance, fare);

    return 0;
}