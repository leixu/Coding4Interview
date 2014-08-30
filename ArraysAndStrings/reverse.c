#include <stdio.h>
#include <stdlib.h>

void reverse(char* str) {
    if (str) {
        char* end = str;
        while(*end) {
            end++;
        }

        end--;

        char tmp;
        while (end > str) {
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
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
