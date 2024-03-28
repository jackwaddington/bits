#ifndef BITS_H
# define BITS_H

#include <unistd.h>

void print_bin(unsigned char octet);

// switches //
unsigned char flip_one(unsigned char octet);
unsigned char flip_two(unsigned char octet);
unsigned char flip_three(unsigned char octet);
unsigned char flip_four(unsigned char octet);
unsigned char flip_five(unsigned char octet);
unsigned char flip_six(unsigned char octet);
unsigned char flip_seven(unsigned char octet);
unsigned char flip_eight(unsigned char octet);
unsigned char flip_all(unsigned char octet);
unsigned char flip_176(unsigned char octet);
unsigned char flip_RHS(unsigned char octet);
unsigned char flip_LHS(unsigned char octet);
unsigned char flip_170(unsigned char octet);

// moves //

unsigned char move_left(unsigned char octet);
unsigned char move_right(unsigned char octet);
unsigned char move_left_n(unsigned char octet, int n);
unsigned char move_right_n(unsigned char octet, int n);

#endif
