#include "path.h"

t_edge *mx_arr_to_list(char **arr, int i) {
    t_edge *new = NULL;
    int c2 = 0;
    int c1 = 0;
    char *isl1 = NULL;
    char *isl2 = NULL;

    for (i = 1; arr[i] != NULL; i++) {
        c1 = mx_length(arr[i], &c2);
        isl1 = mx_strnew(c1);
        isl2 = mx_strnew(c2);
        mx_delimiter(arr[i], isl1, isl2, &c2);
        if (i == 1)
            new = mx_create_edge(isl1, isl2, c2);
        else
            mx_pull_down(&new, isl1, isl2, c2);
    }
    return new;
}
