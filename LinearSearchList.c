#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int	linear_search(int haystack[], int needle, int array_size)
{
	int	i = 0;
	while (i < array_size)
	{
		if (haystack[i] == needle)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int main()
{

	int nums[] = {1, 2, 4, 4, 5, 3, 5, 3, 6};
	int array_size = sizeof(nums) / sizeof(int);
	int target = 6;
	int result = linear_search(nums, target, array_size);
	if (result != -1)
		printf("target found at [%d]", result + 1);
	else
		printf("target not found");
	return (0);
}
