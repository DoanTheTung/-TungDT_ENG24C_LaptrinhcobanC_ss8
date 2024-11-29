#include <stdio.h>
int main() {
    // Khai bao va gan tri mang 
    int arr[] = {15, 25, 30, 12, 60};
    int kichThuoc = sizeof(arr) / sizeof(arr[0]);
    // In ra man hinh 
    printf("Cac phan tu cua mang tu cuoi ve dau:\n");
    for (int i = kichThuoc - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    return 0;
}


