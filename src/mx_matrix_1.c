#include "path.h"

void mx_matrix_1(t_info **info) {
    t_info *Info = *info;

    if (Info->next != NULL) {
        *info = Info->next;
        mx_route_changer(Info->route);
        free(Info);
    }
    else {
        mx_route_changer(Info->route);
        free(Info);
        *info = NULL;
    }
}
