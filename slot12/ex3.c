#include <stdio.h>

void inMaASCII() {
    printf("Ky tu | Ma ASCII\n");
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("  %c   |   %d\n", c, c);
    }
}

int main() {
    inMaASCII();
    
    return 0;
}