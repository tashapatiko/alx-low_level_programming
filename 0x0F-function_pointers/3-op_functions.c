#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: the first interger
 * @b: the second interger
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between two intergers
 * @a: the first interger
 * @b: the second interger
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two intergers
 * @a: the first interger
 * @b: the second interger
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two intergers
 * @a: the first interger
 * @b: the second interger
 *
 * Return: result of division between a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two intergers
 * @a: the first interger
 * @b: the second interger
 *
 * Return: remainder of a divided by a
 */
int op_mod(int a, int b)
{
	return (a % b);
}
