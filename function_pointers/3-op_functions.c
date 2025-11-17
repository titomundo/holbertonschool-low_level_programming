#include "3-calc.h"

/**
* op_add - returns the sum of two ints
* @a: first integer
* @b: second integer
*
* Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - returns the difference of two ints
* @a: first integer
* @b: second integer
*
* Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - returns a times b
* @a: first integer
* @b: second integer
*
* Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns a divided by b
* @a: first integer
* @b: second integer
*
* Return: int
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
* op_mod - returns the remainder of a division of two ints
* @a: first integer
* @b: second integer
*
* Return: int
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
