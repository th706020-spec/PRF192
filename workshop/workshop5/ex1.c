#include <stdio.h>

int main() {
    char str[1000];
    printf("INPUT:\n");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int count = 0;
        while (str[count] != '\0') {
            if (str[count] == '\n') {
                break; 
            }
            count++;
        }
        printf("\nOUTPUT:\n%d\n", count);
    }
}