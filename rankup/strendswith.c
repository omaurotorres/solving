// NOTE: couldnt do it, unlocked solutions
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending) {
    if (strcmp(string, ending) >= 0) {
        int diff = strlen(string) / sizeof(char) - strlen(ending) / sizeof(char);
        for (int i = diff; i < strlen(string) / sizeof(char) ; i++) {
            if (string[i] != ending[i-diff])
                return false;
        }
    } else {
        int diff = strlen(ending) / sizeof(char) - strlen(string) / sizeof(char);
        for (int i = diff; i < strlen(ending) / sizeof(char) ; i++) {
            if (ending[i] != string[i-diff])
                return false;
        }
    }

    return true;
}

int main() {

    solution("abcde", "de");
}
