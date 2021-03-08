#include "path.h"

void mx_turn(t_adj **list, char *island, int weight, char **arr) {
    t_adj *nlist = *list;
    t_adj *newl = mx_new_island(island, weight, arr);

    if (*list == NULL)
        *list = newl;
    newl->next = nlist;
    *list = newl;
}
