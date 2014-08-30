#include <stdio.h>
#include <stdlib.h>

void reverse(char* str) {
    if (str != NULL) {
        char* start = str;
        char* end = str;
        while(*end != '\0') {
            end++;
        }

        end--;

        while (end > start) {
            char tmp = *start;
            *start = *end;
            *end = tmp;
            start++;
            end--;
        }
    }
}

int main() {
    char str[] = {'I', ' ', 'L', 'O', 'V', 'E', ' ', 'U', '\0'};
    //char* str = "I Love U";
    printf("%s\n", (char*)str);
    reverse((char*)str);
    printf("%s\n", (char*)str);
}
