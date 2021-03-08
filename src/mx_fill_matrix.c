#include "path.h"

void mx_fill_matrix(int ***arr_W, t_edge *list, char **ar) {
    int **arr_w = *arr_W;

    while (list != NULL) {
        if (arr_w[mx_byte(ar, list->isl1)][mx_byte(ar, list->isl2)] != 0 &&
            arr_w[mx_byte(ar, list->isl1)][mx_byte(ar, list->isl2)] > list->dist) {
        arr_w[mx_byte(ar, list->isl1)][mx_byte(ar, list->isl2)] = list->dist;
        arr_w[mx_byte(ar, list->isl2)][mx_byte(ar, list->isl1)] = list->dist;
    }
    if (arr_w[mx_byte(ar, list->isl1)][mx_byte(ar, list->isl2)] == 0) {
        arr_w[mx_byte(ar, list->isl1)][mx_byte(ar, list->isl2)] = list->dist;
        arr_w[mx_byte(ar, list->isl2)][mx_byte(ar, list->isl1)] = list->dist;
    }
    list = list->next;
    }
}
