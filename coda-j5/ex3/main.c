#include <stdio.h>

double compute_average(double nb1, double nb2, double nb3) {

    return (nb1 + nb2 + nb3) / 3;

}


int main() {
    int resultat = compute_average(7, 1, 8);

    printf("%d\n", resultat);

    return 0;
}