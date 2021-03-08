#include "path.h"

void mx_matrix_new(int ***mx_W, char **ar, t_edge *list) {
    int size = 0;

    for (; ar[size] != NULL; size++);
    *mx_W = mx_matrix_2(size);
    mx_fill_matrix(mx_W, list, ar);
}
