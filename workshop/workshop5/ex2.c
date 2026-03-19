#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;
    printf("INPUT:\n");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        while (str[length] != '\0' && str[length] != '\n') {
            length++;
        }
        printf("\nOUTPUT:\n");
        for (int i = length - 1; i >= 0; i--) {
            putchar(str[i]); 
        }
        printf("\n");
    }
}