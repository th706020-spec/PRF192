#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
  int n;
  double kq = 0.0;
  double giaiThua = 1.0;
  scanf(" %d",&n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(n==0)
  printf("Error: n must be greater than 0");
  else{
  	for (int i = 1; i <= n; i++) {
      giaiThua = giaiThua * i;
      kq = kq + (1 / giaiThua);
  	}
  	printf("%.3f", kq);
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
