#include <stdio.h>
   int main() {
    // Khai bao va gan gia tri cho mang 
    int arr[] = {1, 2, 3, 4, 5};
    int kichThuoc = sizeof(arr) / sizeof(arr[0]);
    int phanTu, viTri = -1;
    // Moi nguoi dung nhap phan tu 
    printf("Nhap vao mot phan tu: ");
    scanf("%d", &phanTu);
    // Kiem tra phan tu 
    for (int i = 0; i < kichThuoc; i++) {
        if (arr[i] == phanTu) {
            viTri = i;
            break;
        }
    }
    // In ket qua 
    if (viTri != -1) {
        printf("Vi tri phan tu trong mang la: %d\n", viTri);
    } else {
        printf("Phan tu khong ton tai trong mang.\n");
    }
    return 0;
}


