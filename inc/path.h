#ifndef PATH_H
#define PATH_H

#include "libmx.h"

typedef struct s_route {
    int point;
    struct s_route *next;
} t_route;

typedef struct s_info {
	t_route *route;
	int next_point;
	int weight;
	struct s_info *next;
} t_info;

typedef struct s_edge {
    char *isl1;
    char *isl2;
    int dist;
    struct s_edge *next;
} t_edge;

typedef struct s_adj {
    int island;
    int weight;
    struct  s_adj *next;
} t_adj;

void mx_fill_path(t_route **, int **, char **);
void mx_deep_search(t_adj **, int **, char **, int);
void mx_info(t_info **, int, int);
char **mx_errorhandler(int, char *, char ***, int );
char **mx_deldub(char **);
void mx_pathfinder(t_edge *, char **, int);
void mx_matrix_new(int ***, char **, t_edge *);
t_edge *mx_arr_to_list(char **, int);
void mx_pull_down(t_edge **, char *, char *, int);

int **mx_matrix_2(int size);
void mx_fill_matrix(int ***, t_edge *, char **);
void mx_info_cycle(t_adj **, t_info *);
t_route *mx_run(int);

void mx_print_path(t_route *, char **);
void mx_print_route(t_route *, char **);
int mx_length(char *, int *);
void mx_delimiter(char *, char *, char *, int *);
t_edge *mx_create_edge(char *, char *, int);
void mx_turn(t_adj **, char *, int, char **);

void mx_print_dist(t_route *, int **);
void mx_floyd(int ***, int);
void mx_route(t_route **, int);
t_adj **mx_matrix(t_edge *, char **, int);
void mx_matrix_1(t_info **);
t_adj *mx_new_island(char *, int, char **);
int mx_byte(char **, char *);

char *mx_arr_to_str(char **, char *);
bool mx_check1(t_info *, int);

t_info *mx_info_new(int, int, int);
void mx_splitter(t_adj ***, int **, int);
void mx_route_changer(t_route *);
int mx_arrlen(char **);

#endif
