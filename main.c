#include "bits.h"
#include <stdio.h>

void test1(void)
{
	unsigned char o = 0;
	print_bin(o);
	print_bin(flip_one(o));
	print_bin(flip_two(o));
	print_bin(flip_three(o));
	print_bin(flip_four(o));
	print_bin(flip_five(o));
	print_bin(flip_six(o));
	print_bin(flip_seven(o));
	print_bin(flip_eight(o));
	print_bin(flip_all(o));

}

void test2(void)
{
	unsigned char o = 0;

	print_bin(o = flip_three(o));
	print_bin(o = flip_seven(o));
	print_bin(o = flip_all(o));
	print_bin(o = flip_one(o));
	print_bin(o = flip_four(o));
	print_bin(o = flip_two(o));
	print_bin(o = flip_176(o));
	print_bin(o = flip_RHS(o));
	print_bin(o = flip_LHS(o));
	print_bin(o = flip_170(o));
int i = 4;
while(i-- >= 0)
	print_bin(o = flip_all(o));
}

void test3(void)
{
	int i = 3;
	unsigned char o = 8;
	while(i-- > 0)
	print_bin(o = move_left(o));
	i = 6;
	while(i-- > 0)
	print_bin(o = move_right(o));
	while(i++ < 3)
	   print_bin(o = move_left_n(o, i));	
	while(i++ < 5)
	   print_bin(o = move_right_n(o, i));	
}

void	test4(void)
{
	unsigned char o = 4;
	print_bin(o);
	print_bin((o == 4) ? flip_LHS(o) : flip_RHS(o));
	print_bin((o >> 4) | (o << 4));

}

void	test5(void)
{
	unsigned char a = 192;
	unsigned char b = 160;
	printf("we start with these two, a and b:\n");
	print_bin(a);
	print_bin(b);

	printf("\na & b - AND\n");
	print_bin(a);
	print_bin(b);
	printf("--------\n");
	print_bin(a & b);
	printf("--------\n");
	
	printf("\na | b - OR\n");
	print_bin(a);
	print_bin(b);
	printf("--------\n");
	print_bin(a | b);
	printf("--------\n");
	
	printf("\na ^ b - Exclusive OR\n");
	print_bin(a);
	print_bin(b);
	printf("--------\n");
	print_bin(a ^ b);
	printf("--------\n");
	
	printf("\n ~a - NOT\n");
	print_bin(a);
	printf("--------\n");
	print_bin(~a);
	printf("--------\n");

	printf("\n ~b - NOT\n");
	print_bin(b);
	printf("--------\n");
	print_bin(~b);
	printf("--------\n");
}

void test6(void)
{
	print_bin(160);
	print_bin(reverse_bits1(160));
	print_bin(reverse_bits2(160));
}


int main(void)
{
	printf("\n\nTEST 1\ncycle through flipping each switch\n");
	test1();

	printf("\n\nTEST 2\nhold down the variables\n");
	test2();

	printf("\n\nTEST 3\nshift the variables\n\n");
	test3();

	printf("\n\nTEST 4\nlets try some more\n\n");
	test4();

	printf("\n\nTEST 5\nlets try and, with two bis\n\n");
	test5();

	printf("\n\nTEST 6\nexam questions\n");
	test6();
}
