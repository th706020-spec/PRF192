#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void swap(int arr[], int n) {
//@STUDENT:ADD YOUR CODE
	int max_idx = 0; 
    int min_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_idx]) {
            max_idx = i; 
        }
        if (arr[i] < arr[min_idx]) {
            min_idx = i; 
        }
    }
    int temp = arr[max_idx];
    arr[max_idx] = arr[min_idx];
    arr[min_idx] = temp;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n,kq;
  scanf("%d", &n);
  int arr[n];
  fflush(stdin);
  for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
  }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  swap(arr,n);
	
  
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
