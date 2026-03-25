#include <stdio.h>

int main(){
	int n,a;
	FILE *fp;
	fp = fopen ("baitap1.txt","w");
	if (fp == NULL) {
       	printf("Loi: Khong the tao file!\n");
       	return 0;
    }
    printf ("nhap vao so n: ");
    scanf("%d",&n);
    fprintf(fp, "%d", n);
    fclose(fp);
    fp = fopen("baitap1.txt", "r");
    if (fp == NULL) {
        printf("Loi: Khong the mo file! Co the file chua duoc tao.\n");
        return 0;
    }
    fscanf(fp, "%d", &a);
    printf("Gia tri doc duoc tu file la: %d\n", a);
    fclose(fp);
}
