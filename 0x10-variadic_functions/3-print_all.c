#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: ...
 */
void print_all(const char *const format, ...)
{
	int n, i = 0, j = 0;
	va_list ap;
	char *seperator = "";

	va_start(ap, format);
	n = strlen(format);

	while (j < n && format != NULL)
	{

		print_argument(format[j], ap, seperator, &i);
		if (i != (n - 1) && i == 1)
			printf(", ");
		i = 0;
		j++;
	}
	va_end(ap);
	printf("\n");
}


/**
 * print_argument - .....
 * @format: ...
 * @ap: ...
 * @seperator: ...
 * @i: ...
 */

void print_argument(char format, va_list ap, char *seperator, int *i)
{
	char *s;

	switch (format)
	{
	case 'c':
		printf("%s%c", seperator, va_arg(ap, int));
		*i = 1;
		break;
	case 'i':
		printf("%s%d", seperator, va_arg(ap, int));
		*i = 1;
		break;
	case 'f':
		printf("%s%f", seperator, va_arg(ap, double));
		*i = 1;
		break;
	case 's':
		*i = 1;
		s = va_arg(ap, char *);
		if (s == NULL)
		{
			printf("%s%s", seperator, "(nil)");
			break;
		}
		printf("%s%s", seperator, s);
		break;
	default:
		break;
	}
}
