#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int findDifference(int arr[], int n) {
//@STUDENT:ADD YOUR CODE
	int max = 0;
	int min = arr[0];
	for (int i = 0; i < n; i++){
        if (arr[i] > max){
        	max = arr[i];
        }
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
	
	int kq =  max - min;
	return kq;
	
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
  kq = findDifference(arr,n);
	printf("%d",kq);
  
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
