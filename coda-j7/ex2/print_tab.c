#include <stdlib.h>
#include <stdio.h>


void print_tab(char ** tab) {

    int i = 0;

    while (tab[i]) {
        printf("%s\n", tab[i]);
        i++;
    }
}