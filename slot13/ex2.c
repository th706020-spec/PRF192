#include <stdio.h>
#define MAX 100

void addValue(int a[], int *n) {
    if (*n >= MAX) {
        printf("Mang da day\n");
        return;
    }
    int value;
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    
    a[*n] = value; 
    (*n)++; 
    printf("-> Da them %d vao mang.\n", value);
}
void searchValue(int a[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int value, found = 0;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    
    printf("-> Vi tri cua %d trong mang la: ", value);
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (found == 0) {
        printf("Khong tim thay!");
    }
    printf("\n");
}
void removeFirst(int a[], int *n) {
    if (*n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int value, pos = -1;
    printf("Nhap gia tri can xoa (xoa phan tu dau tien tim thay): ");
    scanf("%d", &value);
    for (int i = 0; i < *n; i++) {
        if (a[i] == value) {
            pos = i;
            break;
        }
    }
    
    if (pos != -1) {
        for (int i = pos; i < *n - 1; i++) {
            a[i] = a[i + 1];
        }
        (*n)--; 
        printf("-> Da xoa phan tu %d dau tien.\n", value);
    } else {
        printf("-> Khong tim thay %d trong mang!\n", value);
    }
}
void removeAll(int a[], int *n) {
    if (*n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int value;
    printf("Nhap gia tri can xoa (xoa tat ca): ");
    scanf("%d", &value);
    
    int new_n = 0; 
    for (int i = 0; i < *n; i++) {
        if (a[i] != value) {
            a[new_n] = a[i];
            new_n++;
        }
    }
    
    if (new_n == *n) {
        printf("-> Khong tim thay %d trong mang!\n", value);
    } else {
        printf("-> Da xoa tat ca cac phan tu co gia tri %d.\n", value);
        *n = new_n;
    }
}
void printArray(int a[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("-> Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void printAscending(int a[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int temp[MAX];
    for (int i = 0; i < n; i++) {
        temp[i] = a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
    printf("-> Mang tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
}
void printDescending(int a[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    int temp[MAX];
    for (int i = 0; i < n; i++) {
        temp[i] = a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (temp[i] < temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
    
    printf("-> Mang giam dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
}
int main() {
    int a[MAX];
    int n = 0; 
    int choice;
    do {
        printf("\n================ MENU ================\n");
        printf("1. Add a value\n");
        printf("2. Search a value\n");
        printf("3. Remove the first existence of a value\n");
        printf("4. Remove all existences of a value\n");
        printf("5. Print out the array\n");
        printf("6. Print out the array in ascending order\n");
        printf("7. Print out the array in descending order\n");
        printf("Others. Quit\n");
        printf("======================================\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addValue(a, &n);
                break;
            case 2:
                searchValue(a, n);
                break;
            case 3:
                removeFirst(a, &n);
                break;
            case 4:
                removeAll(a, &n);
                break;
            case 5:
                printArray(a, n);
                break;
            case 6:
                printAscending(a, n);
                break;
            case 7:
                printDescending(a, n);
                break;
            default:
                printf("-> Thoat chuong trinh. Tam biet!\n");
                return 0; 
        }
    } while (1); 

    return 0;
}