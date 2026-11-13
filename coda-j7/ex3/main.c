#include <stdlib.h>
#include <stdio.h>
#include "print_tab.h"
#include "str_cpy.h"

int main(int argc, char ** argv, char **env)	{

	char ** str_tab = malloc(4 * sizeof(*str_tab));
	str_tab[3] = NULL;

	str_tab[0] = str_cpy("%c", argv[0]); 
	str_tab[1] = str_cpy("%c", argv[1]);
	str_tab[2] = str_cpy("%c", argv[2]);

	print_tab(str_tab);

	int i = 0;

	while(str_tab[i] != NULL) {
		free(str_tab[i]);
		i = i + 1;
	}

	free(str_tab);
	exit(0);
}