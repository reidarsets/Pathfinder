#include "path.h"

void mx_info(t_info **info, int next, int weight) {
    t_info *Info = *info;
    t_info *new_s = mx_info_new(next, Info->route->point,
                                  Info->weight + weight);
    t_route *tmp = NULL;
    t_route *tmp_r = NULL;
  
    if (Info->next != NULL) {
        new_s->next = Info->next;
        Info->next = new_s;
    }
    else
        Info->next = new_s;
    tmp = new_s->route;
    tmp_r = Info->route;
    while (tmp_r->next != NULL) {
        tmp_r = tmp_r->next;
        mx_route(&tmp, tmp_r->point);
    }
    mx_route(&tmp, next);
}
