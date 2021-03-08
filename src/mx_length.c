#include "path.h"

int mx_length(char *str, int *c2) {
    int c1 = *c2;

    while (*str != '-') {
        c1++;
        str++;
    }
    str++;
    while (*str != ',') {
        (*c2)++;
        str++;
    }
    return c1;
}
