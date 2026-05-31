#include <stdbool.h>

bool better_than_average(const int *class_points, int class_size, int your_points) {
    int avg = 0;
    for (int i = 0; i < class_size; i++) {
        avg += class_points[i];
    }

    if (your_points > avg / class_size)
        return true;

    return false;
}
