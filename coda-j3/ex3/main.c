#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char mot[50];
    int i = 0;
    
    scanf("%s", mot);
    while (i < 5){
        printf("%s", mot);
        i += 1;
    }

    return 0;
} 