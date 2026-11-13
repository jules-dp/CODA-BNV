#include <stdlib.h>
#include <stdio.h>
#include <string.h> 

char *str_cpy(char * str) {

    char *nouvelle_str;
    nouvelle_str = malloc(14 * sizeof(char));
    strcpy(nouvelle_str, str);

    return nouvelle_str;

}