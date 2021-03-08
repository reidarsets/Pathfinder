#include "path.h"

t_edge *mx_create_edge(char *isl1, char *isl2, int dist) {
    t_edge *new_rib = malloc(sizeof(t_edge));

    new_rib->isl1 = isl1;
    new_rib->isl2 = isl2;
    new_rib->dist = dist;
    new_rib->next = NULL;
    return new_rib;
}
