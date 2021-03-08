#include "path.h"

void mx_print_path(t_route *test, char **arr) {
    mx_printstr("========================================\n");
    mx_printstr("Path: ");
    mx_printstr(arr[test->point]);
    mx_printstr(" -> ");
    while (test->next != NULL)
        test = test->next;
    mx_printstr(arr[test->point]);
    mx_printchar('\n');
}
