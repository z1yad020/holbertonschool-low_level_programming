#ifndef __FILE_NAME__
#define __FILE_NAME__

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	int (*f)(int a, int b);
	char *op;
} op_t;


#endif
