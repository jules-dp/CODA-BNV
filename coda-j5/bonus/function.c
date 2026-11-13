#include <stdlib.h>
#include <stdio.h>
#include "function.h"

int main()
{
	double average = compute_average(12, 16);
	printf("La moyenne de 12 et 16 est %.2f\n", average);

	return 0;

}