unsigned int    hcf(unsigned int a, unsigned int b)
{
	if (b == 0)
		return (a);
	return (hcf(b, a % b));
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	unsigned int divisor = hcf(a, b);
	unsigned int result = (a / divisor) * b;
	return (result);
}
#include <stdio.h>

int main(void)
{
	printf("%d", lcm(4, 3));
}