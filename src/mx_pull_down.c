#include "path.h"

void mx_pull_down(t_edge **node_r, char *isl1, char *isl2, int dist) {
    t_edge *n = *node_r;
    t_edge *node = mx_create_edge(isl1, isl2, dist);

    while (n->next != NULL)
        n = n->next;
    n->next = node;
}
