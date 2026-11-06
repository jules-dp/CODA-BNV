#include <stdlib.h>
#include <stdio.h>

int main() {

    int nb;
    
    printf("Saisir nb : \n");
    scanf("%d", &nb);

    if (nb >= 42) {
        printf("Nb superieur à 42\n");
    } else if (nb <= 42) {
        printf("Nb inferieur à 42\n");
    } else {
        printf("Egal à 42\n");
    }

    return 0;
} 