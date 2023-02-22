#include <stdio.h>
#include "main.h"

int main(void)
{
	int a,b,c;
	int largest;

	a = -972, b = -98, c = 0;
	largest = largest_number(a,b,c);
	printf("%d\n", largest);
	return 0;
}