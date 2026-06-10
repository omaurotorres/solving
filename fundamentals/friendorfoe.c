#include <string.h>

void filter_friends (const char *names[]) {
    int write = 0;
    for (int read = 0; names[read] != NULL; ++read) {
        if (strlen(names[read]) == 4)
            names[write++] = names[read];
    }
    names[write] = NULL;
}
