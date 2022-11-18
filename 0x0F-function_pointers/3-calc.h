#ifndef CAIL_H
#define CAIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - struect
 * @op: the operator
 * @f: associated function
 */

typedef struct op
{
	char *op;
	int (*f)(int i, int j);
} op_t;

int op_add(int i, int j);
int op_sub(int i, int j);
int op_mul(int i, int j);
int op_div(int i, int j);
int op_mod(int i, int j);
int (*get_op_func(char *s))(int, int);

#endif
