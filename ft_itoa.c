#include <stdlib.h>
#include <stdio.h>

int	number_count(int nbr)
{
	int len;

	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);	
}


char	*ft_itoa(int number)
{
	char	*string;
	int		len;
	int		tmp_number;

	tmp_number = number;
	len = number_count(number);
	string = malloc(sizeof(char) * len + 1);
	if (!string)
		return (NULL);
	string[len] = '\0';
	if (number == -2147483648)
	{
		free(string);
		return ("-2147483648");
	}
	if (number < 0)
		tmp_number = - number;
	while (len >= 0 && tmp_number != 0)
	{
		len--;
		string[len] = (tmp_number % 10) + '0';
		tmp_number /= 10;
	}
	if (number < 0)
		string[0] = '-';
	if (number == 0)
		return (free(string), "0");
	return (string);
}