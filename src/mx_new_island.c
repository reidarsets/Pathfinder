#include "path.h"

t_adj *mx_new_island(char *island, int weight, char **arr) {
    t_adj *list = malloc(sizeof(t_adj));

    list->island = mx_byte(arr, island);
    list->weight = weight;
    list->next = NULL;
    return list;
}
