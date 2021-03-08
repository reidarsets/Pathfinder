#include "path.h"

void mx_route(t_route **route, int next) {
    t_route *r = *route;
    t_route *new_r = mx_run(next);

    while (r->next != NULL)
        r = r->next;
    r->next = new_r;
}
