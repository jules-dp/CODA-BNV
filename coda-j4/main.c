#include <stdlib.h>
#include <stdio.h>


int main()
{
    int age;
    int c = 0;

    printf("Saisir un nb entre 0 et 100\n");
    scanf("%d", &age);

    while (age > c) {
        int res = age*c; 
        printf("5*%d=%d\n", c, res);
        c++;
    }

    return 0;
}