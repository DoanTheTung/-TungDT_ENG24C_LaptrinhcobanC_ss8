#include <stdio.h>
   int main() {
    // Khai bao va gan gia tri cho mang 
    int mang[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int soHang = 4;
    int soCot = 4;
    int tong = 0;
    // Tinh tong cac phan tu 
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            if (i == 0 || i == soHang - 1 || j == 0 || j == soCot - 1) {
            	// Tinh tong 
                tong += mang[i][j];
            }
        }
    }
    // In ket qua 
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", tong);
    return 0;
}


