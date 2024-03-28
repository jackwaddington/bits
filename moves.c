#include "bits.h"

unsigned char move_left(unsigned char octet)
{
	return (octet << 1);
}


unsigned char move_right(unsigned char octet)
{
	return (octet >> 1);
}

unsigned char move_left_n(unsigned char octet, int n)
{
	return (octet << n);
}

unsigned char move_right_n(unsigned char octet, int n)
{
	return (octet >> n);
}
