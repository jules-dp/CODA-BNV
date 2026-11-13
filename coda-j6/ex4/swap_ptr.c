#include <stdio.h>
#include <stdlib.h>

int str_cmp(char *str1, char *str2) {

    int i = 0;
    int test = 0;

    while(str1[i] != '\0') {
        if (str1[i] == str2[i]) {
            test++;
        }
        i++;

    }

    if (test == i) {
        printf("Même chaine de caractère\n");
    } else {
        printf("nop");
    }
}
