#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n < 0 ) {
        printf("So luong phan tu khong duoc am\n");
        return 0;
    }else if (n == 0) {
        printf("So luong phan tu phai lon hon 0\n");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf(" so thu %d la: %d \n", i+1, arr[i]);
    }
}