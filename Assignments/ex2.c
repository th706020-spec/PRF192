#include <stdio.h>

int main(){
	int n,a;
	scanf("%d",&n);
	int arr[n];
	FILE *fp;
	fp = fopen ("baitap2.txt","w");
	if (fp == NULL) {
       	printf("Loi: Khong the tao file!\n");
       	return 0;
    }
    
    for (int i = 0; i<n;i++){
    	scanf("%d",&arr[i]);
    	fprintf(fp, "%d ", arr[i]);
	}
    fclose(fp);
    fp = fopen("baitap2.txt", "r");
    if (fp == NULL) {
        printf("Loi: Khong the mo file! Co the file chua duoc tao.\n");
        return 0;
    }
    while (fscanf(fp, "%d", &a) == 1) { 
        printf("%d\t", a);
    }
    fclose(fp);
}
