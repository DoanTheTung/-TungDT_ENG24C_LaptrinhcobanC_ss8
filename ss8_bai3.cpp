#include <stdio.h>
   int main() {
    int n;
    // Moi nguoi dung nhap kich thuoc ma tran 
    printf("Nhap vao mot so nguyen (kich thuoc ma tran): ");
    scanf("%d", &n);
    // Khoi tao va gan gia tri cho mang 
    int mang[n][n];
    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
    // In ra man hinh 
    printf("Ma tran vuong %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }
    return 0;
}


