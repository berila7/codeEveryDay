#include <stdlib.h>
#include <stdio.h>

int	number_count(int nbr)
{
	int len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);	
}


char	*ft_itoa(int number)
{
	int		len;
	char	*string;
	long	tmp_number;

	len = number_count(number);
	string = malloc(sizeof(char) * len + 1);

	if (!string)
		return (NULL);
	string[len] = '\0';

	tmp_number = number;
	if (number < 0)
	{
		string[0] = '-';
		tmp_number = - number;
	}

	if (number == 0)
	{
		string[0] = '0';
		return (string);
	}
	while (tmp_number)
	{
		len--;
		string[len] = (tmp_number % 10) + '0';
		tmp_number /= 10;
	}
	
	return (string);
}