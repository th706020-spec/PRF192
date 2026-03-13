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
        return 0;
    }
    int arr[n];
    int processed[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        processed[i] = 0; 
    }
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
	int found_even = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && processed[i] == 0) {
            found_even = 1;
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] == arr[i]) {
                    count++;
                    processed[j] = 1;
                }
            }
            printf("%d-%d\n", count, arr[i]);
        }
    }
    if (found_even == 0) {
        printf("Not found\n");
    }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
