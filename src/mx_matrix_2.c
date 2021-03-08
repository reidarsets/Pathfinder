#include "path.h"

int **mx_matrix_2(int size) {
    int inf = 999999999;
    int **matrix = malloc(size * sizeof(int *));

    for (int i = 0; i < size; i++) {
        matrix[i] = malloc(size * sizeof(int));
        for (int k = 0; k < size; k++) {
            if (i == k)
                matrix[i][k] = 0;
            else
                matrix[i][k] = inf;
        }
    }
    return matrix;
}
