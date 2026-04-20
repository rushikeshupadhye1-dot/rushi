#include <stdio.h>

#define MAX 10

void inputMatrix(int mat[MAX][MAX], int r, int c, char name) {
    printf("Enter elements for Matrix %c (%d x %d):\n", name, r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c, i, j;
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX], diff[MAX][MAX];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input matrices
    inputMatrix(a, r, c, 'A');
    inputMatrix(b, r, c, 'B');

    // Perform Addition and Subtraction
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Output results
    printf("\nSum of Matrices:\n");
    displayMatrix(sum, r, c);

    printf("\nDifference of Matrices:\n");
    displayMatrix(diff, r, c);

    return 0;
}
