#include <stdio.h>
#include <stdlib.h>

int	my_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*my_strstr(const char *haystack, const char *needle)
{
	if(!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		const char *h = haystack;
		const char *n = needle;
		while (*h && *n && *n == *h)
		{
			h++;
			n++;
		}
		if (!*n)
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

char	*my_strdup(const char *str)
{
	char *dup_str;
	int	len;
	int	i;

	len = my_strlen(str) + 1;
	dup_str = malloc(sizeof(char) * len);
	if (!dup_str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}

char* longestCommonPrefix(char** strs, int strsSize)
{
	int		i;
	char	*needle;
	int		len;
	
	i = 0;
    if (strsSize == 0)
		return (my_strdup(""));
	needle = my_strdup(strs[0]);
	if (!needle)
		return (NULL);
	while (i < strsSize)
	{
		while (my_strstr(strs[i], needle) != strs[i])
		{
			len = my_strlen(needle);
			if (len == 0)
			{
				free(needle);
				return (my_strdup(""));
			}
			needle[len - 1] = '\0';
		}
		i++;
	}
	return (needle);
}

int main(void)
{
	char *str[] = {
		"leets",
		"leetcode",
		"leet",
		"leeds"
	};
	int size = sizeof(str) / sizeof(str[0]);
	printf("%s", longestCommonPrefix(str, size));
}