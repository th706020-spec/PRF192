#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,a,kq,check;
	if (scanf("%d",&n) != 1 || n<0) check = 1;
	
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (check == 1) printf("Invalid input");
	else if (n<0) abs(n);
	else{
		while (n > 0) {
        a = n % 10;    
        kq = kq + a;    
        n = n / 10;    
    }	
	}

	printf("%d",kq);
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
