#include "path.h"

void mx_deep_search(t_adj **Adj, int **mxW, char **orig, int size) {
    t_info *info_p = NULL;

    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++) {
            info_p = mx_info_new(i, i, 0);
            while (info_p != NULL) {
                if (info_p->weight < mxW[i][j]) {
                    mx_info_cycle(Adj, info_p);
                    mx_matrix_1(&info_p);
                }
                else if (info_p->next_point != j
                         || info_p->weight > mxW[i][j])
                    mx_matrix_1(&info_p);
                else {
                    mx_fill_path(&info_p->route, mxW, orig);
                    mx_matrix_1(&info_p);
                }
            }
        }
        mx_splitter(&Adj, mxW, size);
}
