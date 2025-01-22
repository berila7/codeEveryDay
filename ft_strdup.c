#include "main_header.h"

char    *ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src);
	char *dup = malloc(len * sizeof(char) + 1);
	if (!dup)
	{
		free(dup);
		return (NULL);
	}
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	
	dup[i] = 0;
	return(dup);
}

int main()
{
	char	*a;
	a = "Hello World";
	printf("%s\n", ft_strdup(a));
}