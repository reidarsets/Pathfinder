#include "path.h"

int main(int argc, char *argv[]) {
    int i = 0;
    char **arr = NULL;
    char **orig = mx_errorhandler(argc, argv[1], &arr, i);
    int size = mx_atoi(arr[0]);
    t_edge *list = mx_arr_to_list(arr, i);

    mx_pathfinder(list, orig, size);
    return 0;
}
