#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isUniqChars(char* str) {
    bool counter[256] = {false, };
    char* ptr = str;
    while (*ptr) {
        if (counter[*ptr] || ptr-str > 256) {
            return false;
        } else {
            counter[*ptr] = true;
        }
        ptr++;
    }

    return true;
}

int main() {
    char* str = "ILoveU";
    printf("%i\n", isUniqChars(str));
}
