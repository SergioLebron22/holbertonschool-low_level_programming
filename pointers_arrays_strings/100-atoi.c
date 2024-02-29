#include "main.h"

/**
 * _atoi - converts string to int
 *
 * @s: string being converted
 *
 * Return: int
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int size = 0;
	int counter = 0;
	int i;
	int m = 1;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
			break;

		if (*(s +  counter) == '-')
			sign *= -1;

		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		counter++;
	}

	for (i = counter - size; i < counter; i++)
	{
		result = result + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (result * sign);
}
