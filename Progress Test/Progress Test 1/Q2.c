#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int x,y;
	scanf(" %d",&x);
	scanf(" %d",&y);  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int kq = 0;
  if (x>y)
  printf ("Error: y must be greater than x");
  else{
	  for (int i = x; i <= y; i++) {
	      if (i % 2 != 0) {
	          kq += i;
	      }
	  }
	  printf("%d",kq);
	}
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
