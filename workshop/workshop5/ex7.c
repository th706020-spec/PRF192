#include <stdio.h>

int main() {
    char str[1000];
    int digits = 0;
    int letters = 0;
    int others = 0;
    int i = 0;

    printf("INPUT:\n");
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        while (str[i] != '\0') {
            if (str[i] == '\n') {
                i++;
                continue;
            }

            if (str[i] >= '0' && str[i] <= '9') {
                digits++;
            } 
            else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                letters++;
            } 
            else {
                others++;
            }
            
            i++;
        }

        printf("\nOUTPUT:\n");
        printf("%d\n", digits);
        printf("%d\n", letters);
        printf("%d\n", others);
    }

    return 0;
}