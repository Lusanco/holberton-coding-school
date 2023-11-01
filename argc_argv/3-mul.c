#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**/

int main(int argc, char *argv[])
{
	int total;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		total = atoi(argv[1])
			* atoi(argv[2]);
		printf("%d\n", total);
		return (0);
	}
}
