#include <stdio.h>
int main() {
    int m, n, p, q, i, j, k;
    
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);
    
    if (n != p) {
        printf("Matrices cannot be multiplied. The number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int firstMatrix[m][n], secondMatrix[p][q], resultMatrix[m][q];

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            resultMatrix[i][j] = 0;
            for (k = 0; k < n; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // Display the result
    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
2