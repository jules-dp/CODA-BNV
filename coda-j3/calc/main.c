#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char op[10];
    int nb1;
    int nb2;

    printf("Saisir op : + , -, /, * : \n");
    scanf("%9s", op);

    printf("Saisir nb 1 : \n");
    scanf("%d", &nb1);

    printf("Saisir nb 2 : \n");
    scanf("%d", &nb2);

    int add = nb1 + nb2;
    int sous = nb1 - nb2;
    int div = nb1 / nb2;
    int mult = nb1 * nb2;
    int mod = nb1 % nb2;

    if (strcmp(op, "+") == 0) {
        printf("%d\n", add);
    } else if (strcmp(op, "-") == 0) {
        printf("%d\n", sous);
    } else if (strcmp(op, "/") == 0) {
        printf("%d\n", div);
    } else if (strcmp(op, "*") == 0) {
        printf("%d\n", mult);
    } else if (strcmp(op, "%") == 0) {
        printf("%d\n", mod);
    } else {
        printf("Erreur\n");
    }

    return 0;
}