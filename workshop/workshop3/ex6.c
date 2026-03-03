#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game() {
    srand(time(NULL));
    
    int soBimat = rand() % 100 + 1;
    int doan;
    int soLanThu = 7;
    int lanThu = 1;

    printf("========================================\n");
    printf("                DOAN SO\n");
    printf("Ban co %d luot doan.\n", soLanThu);
    printf("========================================\n");

    while (lanThu <= soLanThu) {
        printf("\nLuot thu lan thu %d. doan di: ", lanThu);
        
        if (scanf("%d", &doan) != 1) {
            printf("nhap sai\n");
            while (getchar() != '\n');
            continue;
        }

        if (doan < 1 || doan > 100) {
            printf("So %d nam ngoai pham vi! mat luot\n", doan);
            continue;
        }

        if (doan == soBimat) {
            printf("\nCHUC MUNG! Ban da doan dung so %d sau %d luot!\n", soBimat, lanThu);
            break;
        } else if (doan > soBimat) {
            printf("So ban doan dang LON HON so bi mat.\n");
        } else {
            printf("So ban doan dang NHO HON so bi mat.\n");
        }

        lanThu++;
    }

    if (lanThu > soLanThu) {
        printf("\nRat tiec, ban da het luot. So bi mat la: %d\n", soBimat);
    }
}

int main() {
    play_game();
    return 0;
}