#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int b);
int get_bit(unsigned long int b, unsigned int index);
int set_bit(unsigned long int *b, unsigned int index);
int clear_bit(unsigned long int *b, unsigned int index);
unsigned int flip_bits(unsigned long int b, unsigned long int l);
int _atoi(const char *t);
int _putchar(char a);
int get_endianness(void);

#endif
