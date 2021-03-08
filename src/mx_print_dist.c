#include "path.h"

void mx_print_dist(t_route *test, int **mxW) {
    t_route *t = test;

    mx_printstr("Distance: ");
    if (test->next->next != NULL) {
        while (test->next->next != NULL) {
            mx_printint(mxW[test->point][test->next->point]);
            mx_printstr(" + ");
            test = test->next;
        }
        mx_printint(mxW[test->point][test->next->point]);
        mx_printstr(" = ");
    }
    mx_printint(mxW[t->point][test->next->point]);
    mx_printchar('\n');
    mx_printstr("========================================\n");
}
