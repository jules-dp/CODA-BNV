#include <stdio.h>
#include <stdlib.h>
#include "swap_ptr.h"

int main() {

    char str1[] = "hello world !";
    char str2[] = "hello world !";

    int i = str_cmp(str1, str2);

    exit(0);
}