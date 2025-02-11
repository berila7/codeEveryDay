#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	if (n < 2)
        return (0);
    if (n == 2)         // Specific check for 2
        return (1);
    if (n % 2 == 0)
        return (0);
	int i = 3;
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		int nbr = atoi(av[1]);
		int i = 2;
		if (nbr == 1)
		{
			printf("1");
			return (printf("\n"), 0);
		}
		while (i <= nbr)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				nbr /= i;
				if (nbr > 1)
					printf("*");
				i--;
			}
			i++;
		}
	}
	printf("\n");
}