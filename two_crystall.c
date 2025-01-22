#include <unistd.h>
#include <stdio.h>
#include <math.h>

int	two_crystall_balls(int arr[], int len)
{
	int jumb_amount = (int)sqrt(len);
	printf("%d\n", jumb_amount);
	int i = jumb_amount;
	while (i < len)
	{
		if (arr[i] == 1)
			break ;
		i +=jumb_amount;
	}
	i -= jumb_amount;
	int j = 0;
	while (j < jumb_amount && i < len)
	{
		if (arr[i] == 1)
			return (i);
		j++;
		i++;
	}
	return (-1);
}

int main ()
{
	int arr[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int len = sizeof(arr) / sizeof(int);
	int result = two_crystall_balls(arr, len);
	if (result == -1)
		printf("result not found\n");
	else
		printf("result fount at %d\n", result);
}