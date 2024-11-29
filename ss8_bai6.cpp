#include <stdio.h>
   int main() {
    int arr[4][4] = {
        {2, 3, 4, 1},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {20, 21, 22, 23}
    };
    int n = 4;
    int tong = 0;
    printf("Cac phan tu tren duong cheo chinh cua ma tran la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        tong += arr[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", tong);
    return 0;
}


