#include "main.h"
#include <stdio.h>
int main(void)
{
	char s1[10] = "My school";

	printf("%s\n", s1);
	rev_string(s1);
	printf("%s\n", s1);
	return (0);
}
