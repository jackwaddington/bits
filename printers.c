#include "bits.h"

void print_bin(unsigned char octet)
{
	int div;
	int oct;

	div = 128;
	oct = octet;

	while(div != 0)
	{
		if(div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
		{
			write(1, "0", 1);
		}
		div = div / 2;
	}
	write(1, "\n", 1);
}

// 1 2 4 8 16 32 64 128
/*
int main(void)
{
	unsigned char o = 1;
	print_bin(o);
}
*/
