#include "path.h"

void mx_pathfinder(t_edge *list, char **orig, int size) {
    int **mxW = NULL;
    t_adj **adj = mx_matrix(list, orig, size);

    mx_matrix_new(&mxW, orig, list);
    mx_floyd(&mxW, size);
    mx_deep_search(adj, mxW, orig, size);
}
