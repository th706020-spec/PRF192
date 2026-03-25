#include <stdio.h>

struct sinhvien {
    int id;
    char name[50];
    float grade;
};

int main() {
    struct sinhvien sv_ghi, sv_doc;

    FILE *fp = fopen("baitap3.txt", "w+");
    if (fp == NULL) return 0;
	printf("ID: ");
    scanf("%d", &sv_ghi.id);
    printf("Name: ");
    scanf(" %[^\n]", sv_ghi.name); 
    printf("Grade: ");
    scanf("%f", &sv_ghi.grade);

    fprintf(fp, "%d\n%s\n%.1f\n", sv_ghi.id, sv_ghi.name, sv_ghi.grade);

    rewind(fp);

    fscanf(fp, "%d\n", &sv_doc.id);
    fscanf(fp, "%[^\n]\n", sv_doc.name); 
    fscanf(fp, "%f", &sv_doc.grade);

    fclose(fp);

    printf("\nDoc File\nID: %d\nTen: %s\nDiem: %.1f\n", sv_doc.id, sv_doc.name, sv_doc.grade);

    return 0;
} 	 