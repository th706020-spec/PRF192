#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;
    int is_palindrome = 1;
    printf("INPUT:\n");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    int left = 0;
    int right = length - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            is_palindrome = 0; 
            break;        
        }
        left++;  
        right--; 
    }
    printf("\nOUTPUT:\n");
    if (is_palindrome == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}