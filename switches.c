#include "bits.h"

unsigned char flip_one(unsigned char octet)
{
	unsigned char t = 1;
	return(octet ^ t);
}

unsigned char flip_two(unsigned char octet)
{
	unsigned char t = 2;
	return(octet ^ t);
}

unsigned char flip_three(unsigned char octet)
{
	unsigned char t = 4;
	return(octet ^ t);
}

unsigned char flip_four(unsigned char octet)
{
	unsigned char t = 8;
	return(octet ^ t);
}

unsigned char flip_five(unsigned char octet)
{
	unsigned char t = 16;
	return(octet ^ t);
}

unsigned char flip_six(unsigned char octet)
{
	unsigned char t = 32;
	return(octet ^ t);
}

unsigned char flip_seven(unsigned char octet)
{
	unsigned char t = 64;
	return(octet ^ t);
}

unsigned char flip_eight(unsigned char octet)
{
	unsigned char t = 128;
	return(octet ^ t);
}

unsigned char flip_all(unsigned char octet)
{
	unsigned char t = 255;
	return (octet ^ t);
}


unsigned char flip_176(unsigned char octet)
{
	unsigned char t = 176;
	return (octet ^ t);
}

unsigned char flip_RHS(unsigned char octet)
{
	unsigned char t = 15;
	return (octet ^ t);
}

unsigned char flip_LHS(unsigned char octet)
{
	unsigned char t = 240;
	return (octet ^ t);
}

unsigned char flip_170(unsigned char octet)
{
	unsigned char t = 170;
	return (octet ^ t);
}

