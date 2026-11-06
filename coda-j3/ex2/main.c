#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char op[10]; 
    
    printf("Saisir op : + , -, /, * : \n");
    scanf("%9s", op);

    if (strcmp(op, "+") == 0)  {
        printf("Addition\n");
    } else if (strcmp(op, "-") == 0) {
        printf("Soustraction\n");
    } else if (strcmp(op, "/") == 0) {
        printf("Division\n");
    } else if (strcmp(op, "*") == 0) {
        printf("Multiplicaition\n");
    } else {
        printf("Erreur\n");
    }

    return 0;
} 