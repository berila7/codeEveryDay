#include <stdio.h>
#include <unistd.h>


int	b_search(int arr[], int start, int end, int target)
{
	int mid;
	while (start < end)
	{
		mid = start + (end - start) / 2;
		if (arr[mid] == target)
			return (mid);
		else if (arr[mid] < target)
			start = mid + 1;
		else
			end = mid;
	}
	return (-1);
}

int main()
{
	int arr[] = {2, 4, 5, 6, 10, 11, 13, 23, 34 ,45};
	int target = 5;
	int end = sizeof(arr) / sizeof(int);
	int start = 0;
	int result = b_search(arr, start, end, target);
	if (result == -1)
		printf("target not found\n");	
	else
		printf("target found at [%d]\n", result);
}