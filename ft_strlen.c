#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
int main(int ac, char *arv[])
{
	char *str = "mohammed";
	printf("%d" ,ft_strlen(str));
}