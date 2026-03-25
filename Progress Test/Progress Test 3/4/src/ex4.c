#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
// Function to find the largest even number in an array
int findLargestEvenNumber(int arr[], int n){
	//@STUDENT: WRITE YOUR CODE HERE:
	int max = 0;
	for (int i = 0; i < 6; i++){
        if (arr[i] % 2 == 0 && arr[i] > max){
        	max = arr[i];
        }
    }
    return max;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n,max;
  scanf("%d", &n);
  int arr[n];
  fflush(stdin);
  for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	max = findLargestEvenNumber(arr,n);
	printf("%d",max);


  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
