#include "main_header.h"


int main(int ac, char *av[])
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			while(av[1][i] == ' ' || av[1][i] == '	')
				i++;
			if (av[1][i + 1] >= 'A' && av[1][i] <= 'Z')
			{
				write(1, " ", 1);
				av[1][i] += 
			}
		}
				
	}
	write(1, "\n", 1);
}