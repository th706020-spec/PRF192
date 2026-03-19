#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int point[50];
	int x;
	int y;
}point;

void nhapDiem(point p[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &p[i].x, &p[i].y);
    }
}

void inDiem(point p[], int n) {
    for (int i = 0; i < n; i++) {
        if (p[i].y > p[i].x) {
            printf("(%d, %d)\n", p[i].x, p[i].y);
        }
    }
}

void inDiemLonNhat(point p[], int n) {
    int max = 0; 
    for (int i = 1; i < n; i++) {
        if (p[i].y > p[max].y) {
            max = i; 
        }
    }
    printf("diem lon nhat: (%d, %d)\n", p[max].x, p[max].y);
}



int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int a[n];
  scanf("%d",&n);
  point p[n];
  nhapDiem(p, n);
  
	
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  inDiem(p, n);
  inDiemLonNhat(p, n);
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 
	
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}