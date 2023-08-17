#include <stdio.h>

void matrixMultiplication(int A[][10], int B[][10], int C[][10], int rows_A, int cols_A, int cols_B) {
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cols_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[10][10];
    int B[10][10];
    int C[10][10];

    int rows_A, cols_A, rows_B, cols_B;

    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &rows_A, &cols_A);

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &rows_B, &cols_B);

    if (cols_A != rows_B) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_A; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rows_B; i++) {
        for (int j = 0; j < cols_B; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    matrixMultiplication(A, B, C, rows_A, cols_A, cols_B);

    printf("Matrix A:\n");
    printMatrix(A, rows_A, cols_A);

    printf("Matrix B:\n");
    printMatrix(B, rows_B, cols_B);

    printf("Matrix C (Result of Multiplication A * B):\n");
    printMatrix(C, rows_A, cols_B);

    return 0;
}
In this program, the user is prompted to enter the dimensions and elements of matrices A and B. The matrixMultiplication function calculates the result of the multiplication and stores it in matrix C. Finally, the program prints the original matrices A and B, as well as the result matrix C.





Regenerate
