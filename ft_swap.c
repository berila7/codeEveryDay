#include "main_header.h"

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *a;
}

int main()
{
	int	first = 11;
	int	second = 22;

	ft_swap(&first, &second);

	printf("first %d" , first);
}