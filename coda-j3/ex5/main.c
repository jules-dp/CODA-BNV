#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    int nb;
    int i = 0;
    char op[5];

    scanf("%s", op);
    scanf("%d", &nb);

    if (strcmp(op, "+")  == 0) {
        while (i < nb+1) {
            printf("%d", i);
            i += 1;
            printf("\n");
            
        }
    } else if (strcmp(op, "-")  == 0) {
        while (nb >= 0) {
            printf("%d", nb);
            nb -= 1;
            printf("\n");
            
        }
    }


    return 0;
    
} 