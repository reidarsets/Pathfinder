#include "path.h"

void mx_delimiter(char *str, char *i1, char *i2, int *d) {
    while (*str != '-') {
        *i1 = *str;
        i1++;
        str++;
    }
    str++;
    while (*str != ',') {
        *i2 = *str;
        i2++;
        str++;
    }
    str++;
    if (mx_atoi(str) < 0)
        exit(0);
    *d = mx_atoi(str);
}
