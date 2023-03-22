#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - subtruct a minus b
 * @a: ...
 * @b: ...
 * Return: An integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - adds a and b
 * @a: ...
 * @b: ...
 * Return: An integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - gets product of a and b
 * @a: ...
 * @b: ...
 * Return: An integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a div b
 * @a: ...
 * @b: ...
 * Return: An integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets modulus of a and b
 * @a: ...
 * @b: ...
 * Return: An integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

