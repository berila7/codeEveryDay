#include "main_header.h"

int is_space(int c)
{
	return ((c >= 9 && c <= 13) || c == 32 ? 1 : 0);
}

int is_digit(int c)
{
	return (c >= 49 && c <= 57 ? 1 : 0);
}

int	ft_atoi(const char *str)
{
	int res = 0;
	int i = 0;
	int sign = 1;

	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res *= sign);
}
