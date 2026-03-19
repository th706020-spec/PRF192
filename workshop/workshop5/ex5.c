#include <stdio.h>

int main() {
    char str[1000];
    char target;
    char replacement;
    int count = 0;

    printf("INPUT:\n");
    scanf("%s", str);
    scanf(" %c", &target);
    scanf(" %c", &replacement);

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == target) {
            str[i] = replacement;
            count++;
        }
        i++;
    }

    printf("\nOUTPUT:\n");
    printf("%d\n", count);
    printf("%s\n", str);

    return 0;
}