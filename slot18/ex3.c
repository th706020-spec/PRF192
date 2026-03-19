#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	char name[50];
	int id;
	float price;
}Book;



int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
	scanf("%d",&n);
	Book p[n];
	int max = 0;
	printf("\n");
	for (int i = 0 ; i < n; i++){
		if (i>0)
		printf("\n");
		fflush(stdin);
		printf("Enter details for Book %d: \n",i+1);
		printf("Book Name: ");
		scanf("%[^\n]",p[i].name);
		printf("Book  ID: "); 
		scanf("%d", &p[i].id);
		printf("Book  Price (nghin dong): ");
		scanf("%f",&p[i].price);
	}
	for (int i = 1 ; i < n; i++){
		if (p[i].price > p[max].price){
				max = i;
			}
	}
	
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  	
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("Book Name: %s\n", p[max].name);
	printf("Book ID: %d\n", p[max].id);
	printf("Book Price: %fK\n", p[max].price);
	
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}