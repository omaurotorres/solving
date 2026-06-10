#include <stdbool.h>
#include <math.h>

bool is_square(int n) {
    if ((fmod(sqrt(n), 1) == 0))
		return true;
	return false;
}
