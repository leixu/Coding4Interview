#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isUniqChars(char* str) {
    bool counter[256] = {false, };
    while (*str) {
        if (counter[*str]) {
            return false;
        } else {
            counter[*str] = true;
        }
        str++;
    }

    return true;
}

int main() {
    char* str = "ILoveU";
    printf("%i\n", isUniqChars(str));
}
