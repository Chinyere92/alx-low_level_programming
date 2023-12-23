#include <stdio.h>
/**
 * main - starting function
 * Return: 0 on successful
 */
int main(void)
{
	int n = 1;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
		{
			if (n != 100)
				printf("Buzz ");
			else
				printf("Buzz\n");
		}
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
	}
	return (0);
}
