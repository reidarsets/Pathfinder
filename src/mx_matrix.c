#include "path.h"

t_adj **mx_matrix(t_edge *list, char **orig, int size) {
    t_adj **adj = malloc(size * sizeof(t_adj *));
    int h = 0;

    for (int i = 0; i < size; i++)
        adj[i] = NULL;
    while (list != NULL) {
        h = mx_byte(orig, list->isl1);
        if (adj[h] == NULL)
            adj[h] = mx_new_island(list->isl2, list->dist, orig);
        else
            mx_turn(&adj[h], list->isl2, list->dist, orig);
        h = mx_byte(orig, list->isl2);
        if (adj[h] == NULL)
            adj[h] = mx_new_island(list->isl1, list->dist, orig);
        else
            mx_turn(&adj[h], list->isl1, list->dist, orig);
        list = list->next;
    }
    return adj;
}
