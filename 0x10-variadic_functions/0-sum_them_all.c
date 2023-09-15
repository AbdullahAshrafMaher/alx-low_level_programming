#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sums all its parameters
 *
 * @n: first parameter
 *
 * Return: 0 if n is null
 * or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{

va_list ap;
int sum = 0;
unsigned int i;

va_start(ap, n);

if (n != 0)
{
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
}

va_end(ap);
return (sum);

}
