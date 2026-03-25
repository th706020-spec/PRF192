#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[100];
	scanf("%[^\n]",str);

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i=0;str[i] != '\0';i++){
		if (islower(str[i]) == 1){
			(str[i])=  toupper(str[i]);
		}
		if (str[i] == ' ')
			i==0;
		if (i>=2) break;
	}
	for (int i=0;str[i] != '\0';i++){
		printf("%s",str[i]);
	}
  		
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
