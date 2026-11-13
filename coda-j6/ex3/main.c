#include <stdio.h>
#include <stdlib.h>

void str_rev(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    i--;

    while (i >= 0) {
        printf("%c", str[i]);
        i--;
    }

    printf("\n");
}

int main() {
    str_rev("hello");
    return 0;
}