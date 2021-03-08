#include "path.h"

void mx_info_cycle(t_adj **Adj, t_info *info_p) {
    t_adj *tmp = Adj[info_p->next_point];

    while (Adj[info_p->next_point] != NULL) {
        if (mx_check1(info_p, Adj[info_p->next_point]->island) == 1) {
            mx_info(&info_p, Adj[info_p->next_point]->island,
                     Adj[info_p->next_point]->weight);
            Adj[info_p->next_point] = Adj[info_p->next_point]->next;
        }
        else
            Adj[info_p->next_point] = Adj[info_p->next_point]->next;
        }
    Adj[info_p->next_point] = tmp;
}
