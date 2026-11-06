#include <stdlib.h>
#include <stdio.h>


int main()
{
    int age;
    int res = 0;

    printf("Saisir un nb entre 0 et 20\n");
    scanf("%d", &age);

    while (age > 1) {
        res = res + age*age-1; 
        printf("*", age);
        age--;

    printf("%d", res);
    }
    
    return 0;
}
