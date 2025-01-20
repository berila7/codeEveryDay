#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
	if (x < 0)
		return (false);
	int xcp = x;
	int reverse = 0;
	while (x > 0)
	{
		reverse = (reverse * 10) + (x % 10);
		x /= 10;
	}
	if (reverse == xcp)
		return (true);
	return (false);
}


int main()
{
	printf("%d", isPalindrome(121));
}