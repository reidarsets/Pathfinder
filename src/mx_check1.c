#include "path.h"

bool mx_check1(t_info *info_p, int island) {
    t_info *st = info_p;
    t_route *ro = st->route;;

        while (ro != NULL) {
        	if (ro->point == island)
        		return false;
            ro = ro->next;
        }
    return true;
}
