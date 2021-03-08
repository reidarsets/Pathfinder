#include "path.h"

t_route *mx_run(int point) {
    t_route *new_r = malloc(sizeof(t_route));
  
    new_r->point = point;
    new_r->next = NULL;
    return new_r;
}
