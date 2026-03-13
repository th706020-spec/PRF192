#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
    printf("\nINPUT:\n");
    char str[105];
    scanf("%[^\n]", str);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char dest[105];

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    int j = 0;
    for (int i = len - 1; i >= 0; i--) {
        dest[j] = str[i];
        j++;
    }
    dest[j] = '\0';
    printf("Reversed string: %s\n", dest);
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}