#include "path.h"

void mx_splitter(t_adj ***t, int **mxW, int size) {
    t_adj **Adj = *t;
    t_adj *tmp = Adj[0];

    for (int i = 0; i < size; i++) {
        tmp = Adj[i];
        while (Adj[i] != NULL) {
            Adj[i] = Adj[i]->next;
            free(tmp);
            tmp = Adj[i];
        }
    }
    free(Adj);
    for (int i = 0; i < size; i++)
        free(mxW[i]);
    free(mxW);
}
