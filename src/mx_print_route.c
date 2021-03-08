#include "path.h"

void mx_print_route(t_route *test, char **arr) {
    mx_printstr("Route: ");
    while (test->next != NULL) {
        mx_printstr(arr[test->point]);
        mx_printstr(" -> ");
        test = test->next;
    }
    mx_printstr(arr[test->point]);
    mx_printchar('\n');
}
