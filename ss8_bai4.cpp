#include <stdio.h>
   int main() {
    // Khai bao va gan gia tri cho mang 
    int arr[3][4] = {
        {10, 20, 30, 40},
        {5, 15, 25, 35},
        {50, 60, 70, 80}
    };
    int soHang = 3;
    int soCot = 4;
    int max = arr[0][0]; 
    // Tim phan tu lon nhat 
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    // In ra man hinh 
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    return 0;
}


