#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a,b,check;
	float kq;
	if (scanf("%d",&a) != 1 || a<0) check = 1;
	if (scanf("%d",&b) != 1 || b<0) check = 1;

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (check == 1) printf("-1");
  else{
  	kq = (float)cbrt(-b/a);
  	printf("%.3f",kq);
  }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
