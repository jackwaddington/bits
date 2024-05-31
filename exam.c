#include"bits.h"
unsigned char reverse_bits1(unsigned char octet)
{
	unsigned char	rtn = 0;
	unsigned		byte_len = 8;

	while(byte_len--)
	{
		rtn = (rtn << 1) | (octet & 1);
//		print_bin(rtn);
//		print_bin(octet);
		octet >>= 1;
//		print_bin(octet);
		write(1, "\n", 1);
	}
	return (rtn);
}


unsigned char reverse_bits2(unsigned char octet)
{
	unsigned char 	result = 0;
	unsigned 		byte_len = 8;

	while(byte_len--)
	{
		result <<= 1;

		if((octet & 1) == 1)
			result++;
		octet >>= 1;
	}
	return result;
}
