#include "path.h"

int mx_arrlen(char **arr) {
    int count = 0;
    
    while(arr[count] != NULL)
        count++;
    return count;
}
