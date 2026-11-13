#include <stdio.h>
#include <stdlib.h>

int str_len(char *str) {

    int i = 0;

    while(str[i] != '\0') {
        printf("%c\n", str[i]);
        i = i + 1;
    }
    printf("%d\n", i);
}


int main() {

    str_len("hello");
}
