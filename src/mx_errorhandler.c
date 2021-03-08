#include "path.h"

static void error1(int i) {
    char *s = mx_strjoin("error: line ", mx_itoa(i + 1));
    char *ss = mx_strjoin(s, " is not valid\n");

    if (i == -1) {
        write(2, "error: invalid number of islands\n", 33);
        exit(0);
    }
    if (i == 0) {
        write(2, "error: line 1 is not valid\n", 27);
        exit(0);
    }
    write(2, ss, mx_strlen(ss));
    exit(0);
}

static void error2(char *str) {
    int count = 0;
    int i = 0;
    if (str[0] == '\n')
        error1(count);
    for (; str[i] != '\0'; i++) {
        if (str[i] == '\n' && str[i + 1] == '\n')
            error1(count + 1);
        if (str[i] == '\n')
            count++;
    }
    if (str[i - 1] != '\n')
        error1(count);
}

static void error3(char **arr) {
    for (int i = 0; arr[0][i] != '\0'; i++)
        if (mx_isdigit(arr[0][i]) == 0 || mx_atoi(arr[0]) == 48
            || arr[0][0] == 48 || arr[0][0] == '\0')
            error1(0);
    for (int i = 1; arr[i] != NULL; i++) {
        int j = 0;

        for (; arr[i][j] != '-'; j++)
            if (mx_isalpha(arr[i][j]) == 0)
                error1(i);
        j++;
        for (; arr[i][j] != ','; j++)
            if (mx_isalpha(arr[i][j]) == 0)
                error1(i);
        if (arr[i][++j] == '\0' || arr[i][j] == 48)
            error1(i);
        for (; arr[i][j] != '\0'; j++)
            if (mx_isdigit(arr[i][j]) == 0)
                error1(i);
    }   
}

static void error4(int num, char *f) {
    char buf;
    char *s = NULL;
    char *ss = NULL;
    int fd = open(f, O_RDONLY);

    if (num != 2) {
        write(2,"usage: ./pathfinder [filename]\n", 31);
        exit(0);
    }
    if (fd < 0) {
        ss = mx_strjoin("error: file ", f);
        s = mx_strjoin(ss, " does not exist\n");
        write(2, s, mx_strlen(s));
        exit(0);
    }
    if (read(fd, &buf, 1) <= 0) {
        s = mx_strjoin(mx_strjoin("error: file ", f), " is empty\n");
        write(2, s, mx_strlen(s));
        exit(0);
    }
}


char **mx_errorhandler(int argc, char *argv, char ***arr, int i) {
    char *str = NULL;
    char **arr_n = NULL;
    char **err6 = NULL;

    error4(argc, argv);
    str = mx_file_to_str(argv);
    if (str[0] == '\n')
        error1(0);
    *arr = mx_strsplit(str, '\n');
    error3(*arr);
    error2(str);
    str = mx_arr_to_str(*arr, str);
    arr_n = mx_strsplit(str, ',');
    mx_strdel(&str);
    err6 = mx_deldub(arr_n);
    mx_del_strarr(&arr_n);
    for(; err6[i] != NULL; i++);
    if (i != mx_atoi(*arr[0]))
        error1(-1);
    return err6;
}

