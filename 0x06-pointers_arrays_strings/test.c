#include <stdio.h>
#include "main.h"
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}


int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,98, 1024, 1337};

	print_array(a,13);
	reverse_array(a,13);
	print_array(a,13);
	return (0);
}
