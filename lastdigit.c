#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of a number
 *name - Fasasi Abosede Sidiqat (mufatec)
 *Date - 20th February 2023
 * Return: 0
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 
	last_digit = n % 10;
	printf("The last digit %d of n is %d", n, last_digit);
		if (last_digit > 5 )
		{
			printf("The last is greater than 5\n");
		}
	else if (last_digit == 0)
	{
		printf("The last digit is 0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("The last digit is less than 6 and not 0\n");
	}

	return (0); /* mufatech */
}
