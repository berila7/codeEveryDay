#include <unistd.h>

int is_space(int c)
{
	return ((c >= 9 && c <= 13) || c == 13 ? 1 : 0);
}

int is_valid (int c, int baselen)
{
	int i = 0;

	char *lcbase = "0123456789abcdef";
	char *ucbase = "0123456789ABCDEF";

	while (i < baselen)
	{
		if (c == lcbase[i] || c == ucbase[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, int str_base)
{
	int res = 0;
	int i = 0;
	int sign = 1;

	while (is_space(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] == '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] && is_valid(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res * sign);
}