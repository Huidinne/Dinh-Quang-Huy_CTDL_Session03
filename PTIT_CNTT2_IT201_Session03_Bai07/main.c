#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int rows, cols;
    do {
        printf("Nhap so hang: ");
        scanf("%d", &rows);
        printf("Nhap so cot: ");
        scanf("%d", &cols);
        if (rows <= 0 || cols <= 0) {
            printf("so hang va so cot khong hop le \n");
        }
    }while (rows < 1 || cols < 1);
    int **matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int k;
    int sum = 0;
    printf("nhap hang muon tinh tong:");
    scanf("%d", &k);
    if (k <=0 ) {
        printf("hang khong ton tai");
    }else {
        for (int j = 0; j < cols; j++) {
            sum += matrix[k-1][j];
        }
    }
    printf("tong: %d", sum);
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}