#include "path.h"

void mx_fill_path(t_route **route, int **mxW, char **orig) {
    t_route *r = *route;

    mx_print_path(*route, orig);
    mx_print_route(*route, orig);
    mx_print_dist(r, mxW);
}
