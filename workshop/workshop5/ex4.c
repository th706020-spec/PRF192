#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;
    int in_word = 0; 
    printf("INPUT:\n");
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
                in_word = 0;
            } 
            else {
                if (in_word == 0) {
                    count++;
                    in_word = 1; 
                }
            }
            i++;
        }
        printf("\nOUTPUT:\n%d\n", count);
    }
    return 0;
}