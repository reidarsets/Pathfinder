#include "path.h"

int mx_byte(char **arr, char *str) {
    int i = 0;
    
    while (mx_strcmp(arr[i], str) != 0)
        i++;
    return i;
}
