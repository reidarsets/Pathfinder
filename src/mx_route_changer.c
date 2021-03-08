#include "path.h"

void mx_route_changer(t_route *route) {
    t_route *tmp = route;

    while (route != NULL) {
        route = route->next;
        free(tmp);
        tmp = route;
    }
}
