#include "main_header.h"

unsigned char reverse_bits(unsigned char octect)
{
	unsigned char res = 0;

	unsigned int i = 8;

	while (i--)
	{
		res = (res << 1) | (octect & 1);
		octect = octect >> 1;
	}
	return (res);
}

