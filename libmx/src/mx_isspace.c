#include "libmx.h"

bool mx_isspace(const char c) {
    if ((c >= 9 && c <= 13) || c == 32)
        return true;
    
    return false;
}
