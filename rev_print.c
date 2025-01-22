#include "main_header.h"

int main(int ac, char *av[])
{
	int i = 0;
	if (ac == 2)
	{
		int len = ft_strlen(&av[1][i]);
		while (len--)
			write(1 ,&av[1][len], 1);
	}
	write(1, "\n", 1);
}