#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char *arv[])
{
	char *str = "mohammed";
	ft_putstr(str);
}