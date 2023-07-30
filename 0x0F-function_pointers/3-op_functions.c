#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first numb
 * @b: second numb
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numb
 * @a: first numb
 * @b: second numb
 *
 * Return: prduct
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numb
 * @a: first numb
 * @b: second numb
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Remainder of two num
 * @a: first numb
 * @b: second numb
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
