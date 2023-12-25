#include <stdio.h>

void swap_rows(int matrix[][3], int row1, int row2, int cols) {
    for (int i = 0; i < cols; i++) {
        int temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
}

void print_matrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Nhap so dong: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);


    int matrix[rows][cols];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Mang truoc khi hoan vi:\n");
    print_matrix(matrix, rows, cols);


    int row1, row2;
    printf("Nhap hai hang can hoan vi (tinh tu 0): ");
    scanf("%d %d", &row1, &row2);
    swap_rows(matrix, row1, row2, cols);


    printf("Mang sau khi hoan vi:\n");
    print_matrix(matrix, rows, cols);

    return 0;
}