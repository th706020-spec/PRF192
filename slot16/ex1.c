#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int countV (char str[]){
	int len = strlen(str);
	int vowels = 0;
	for ( int i = 0; i < len; i++) {
	    char c = str[i];
	    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
	        vowels++;
	    }
	}
	return vowels;
}


int main() {
  system("cls");
  //@STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	char str[105];
	scanf("%[^\n]",str);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int kq = countV(str);
	printf("%d",kq);
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
