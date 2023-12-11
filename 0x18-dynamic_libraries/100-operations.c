#include <stdio.h>

/**
* add - Performs addition of two integers.
* @a: The first integer.
* @b: The second integer.
*
* Return: The sum of @a and @b.
*/
int add(int a, int b);

/**
* sub - Performs subtraction of two integers.
* @a: The first integer.
* @b: The second integer.
*
* Return: The difference between @a and @b.
*/
int sub(int a, int b);

/**
* mul - Performs multiplication of two integers.
* @a: The first integer.
* @b: The second integer.
*
* Return: The product of @a and @b.
*/
int mul(int a, int b);

/**
* divide - Performs division of two integers.
* @a: The dividend.
* @b: The divisor.
*
* Return: The quotient of @a divided by @b.
*         If @b is 0, it prints an error message and returns 0.
*/
int divide(int a, int b);

/**
* mod - Performs modulus operation of two integers.
* @a: The dividend.
* @b: The divisor.
*
* Return: The remainder of @a divided by @b.
*         If @b is 0, it prints an error message and returns 0.
*/
int mod(int a, int b);

/**
* main - Entry point of the program.
*
* Return: Always 0 (success).
*/
int main(void)
{
int a = 10;
int b = 5;
int result;

result = add(a, b);
printf("Addition: %d\n", result);

result = sub(a, b);
printf("Subtraction: %d\n", result);

result = mul(a, b);
printf("Multiplication: %d\n", result);

result = divide(a, b);
printf("Division: %d\n", result);

result = mod(a, b);
printf("Modulus: %d\n", result);

return (0);
}

/**
* add - Performs addition of two integers.
* @a: The first integer.
* @b: The second integer.
*
* Return: The sum of @a and @b.
*/
int add(int a, int b)
{
return (a + b);
}

/**
* sub - Performs subtraction of two integers.
* @a: The first integer.
* @b: The second integer.
*
* Return: The difference between @a and @b.
*/
int sub(int a, int b)
{
return (a - b);
}

/**
* mul - Performs multiplication of two integers.
* @a: The first integer.
* @b: The second integer.
*
* Return: The product of @a and @b.
*/
int mul(int a, int b)
{
return (a * b);
}

/**
* divide - Performs division of two integers.
* @a: The dividend.
* @b: The divisor.
*
* Return: The quotient of @a divided by @b.
*         If @b is 0, it prints an error message and returns 0.
*/
int divide(int a, int b)
{
if (b == 0)
{
printf("Error: Division by zero\n");
return (0);
}
else
{
return (a / b);
}
}

/**
* mod - Performs modulus operation of two integers.
* @a: The dividend.
* @b: The divisor.
*
* Return: The remainder of @a divided by @b.
*         If @b is 0, it prints an error message and returns 0.
*/
int mod(int a, int b)
{
if (b == 0)
{
printf("Error: Modulus by zero\n");
return (0);
}
else
{
return (a % b);
}
}
