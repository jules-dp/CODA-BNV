#include <stdlib.h>
#include <stdio.h>


int main(char ** tab) {

    char ** test = malloc(4 * sizeof(*test));

    test[0] = "a";
    test[1] = "b";
    test[2] = "c";
    test[3] = NULL;

    int i = 0;

    while (test[i]) {
        printf("%s", test[i]);
        i++;
    }
}
