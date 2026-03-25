#include <stdio.h>

struct sinhvien {
    int id;
    char name[50];
    float grade;
};

int main() {
    int n;
    printf("nhap so sinh vien: ");
    scanf("%d", &n);
    
    struct sinhvien sv_ghi[n], sv_doc[n];

    FILE *fp = fopen("baitap4.txt", "w+");
    if (fp == NULL) return 0;

    for (int i = 0; i < n; i++) {
    	printf("sinh vien %d\n",i+1);
    	printf("ID: ");
        scanf("%d", &sv_ghi[i].id);
        printf("Name: ");
        scanf(" %[^\n]", sv_ghi[i].name); 
        printf("Grade: ");
        scanf("%f", &sv_ghi[i].grade);
        printf("\n");
        
        fprintf(fp, "%d\n%s\n%.1f\n", sv_ghi[i].id, sv_ghi[i].name, sv_ghi[i].grade);
    }

    rewind(fp);

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%d\n", &sv_doc[i].id);
        fscanf(fp, "%[^\n]\n", sv_doc[i].name); 
        fscanf(fp, "%f", &sv_doc[i].grade);
    }

    fclose(fp);
	printf("Doc File: \n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh Vien %d \nID: %d\nTen: %s\nDiem: %.1f\n", i+1 , sv_doc[i].id, sv_doc[i].name, sv_doc[i].grade);
    }

    return 0;
}