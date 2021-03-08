#include "path.h"

t_info *mx_info_new(int next, int next_point, int weight) {
    t_info *new_s = malloc(sizeof(t_info));
    new_s->route = mx_run(next_point);
  
    new_s->next_point = next;
    new_s->weight = weight;
    new_s->next = NULL;
    return new_s;
}
