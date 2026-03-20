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

void sortBooksAscending(Book arr[], int n) {
    Book temp; // Biến cấu trúc tạm thời dùng để hoán đổi
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Nếu giá của sách đứng trước lớn hơn sách đứng sau, ta sẽ hoán đổi vị trí
            if (arr[i].price > arr[j].price) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


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
	sortBooksAscending(p, n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  	
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	printf("sach co gia cao nhat : \n");
	printf("Book Name: %s\n", p[max].name);
	printf("Book ID: %d\n", p[max].id);
	printf("Book Price: %fK\n", p[max].price);
	
	printf("Book list after sorted : \n");
	for(int i = 0 ; i < n ; i ++){
		printf("Book id:%d\n",b[i].id);
		printf("Book name:%s\n",b[i].name);
		printf("Book price:%.2lf\n",b[i].price);
		printf("\n");
	}
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}