#include <stdbool.h> // necessary because true and false are not defined in plain C

bool lovefunc(int a, int b) {
    if ( a % 2 == 0 && // theyre both even
         b % 2 == 0   )
        return false;

    if ( a % 2 != 0 && // theyre both odd
         b % 2 != 0   )
        return false;

    return true;
}
