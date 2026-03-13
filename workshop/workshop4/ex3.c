#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	if (scanf("%d", &n) != 1 || n <= 0) {
        printf("OUTPUT:\n");
        printf("Invalid input\n");
        return 0;
    }
    int a[n];
    int soChan[n];
    int dem = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) {
            soChan[dem] = a[i];
            dem++;
        }
    }
    for (int i = 0; i < dem - 1; i++) {
        for (int j = i + 1; j < dem; j++) {
            if (soChan[i] < soChan[j]) {
                int temp = soChan[i];
                soChan[i] = soChan[j];
                soChan[j] = temp;
            }
        }
    }
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
	for (int i = 0; i < dem; i++) {
        printf("%d\n", soChan[i]);
    }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
