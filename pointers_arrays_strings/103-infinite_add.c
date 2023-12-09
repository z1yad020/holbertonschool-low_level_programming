/**
 * infinite_add - adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer
 * @size_r: size of buffer
 * Return: returns a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_i = 0, n2_i = 0;
	short remain = 0, digit = 0;

	r[size_r-- - 1] = '\0';
	while (n1[n1_i++])
		;
	n1_i -= 2;
	while (n2[n2_i++])
		;
	n2_i -= 2;

	while (n1_i >= 0 || n2_i >= 0)
	{
		if (!size_r)
			return (0);

		if (n1_i < 0)
			digit = n2[n2_i] % 12 + remain;
		else if (n2_i < 0)
			digit = n1[n1_i] % 12 + remain;
		else
			digit = n1[n1_i] % 12 + n2[n2_i] % 12 + remain;


		if (digit < 10)
			remain = 0;
		else
			remain = 1;

		r[size_r-- - 1] = digit % 10 + '0';

		n1_i--;
		n2_i--;
	}

	if (remain && size_r)
		r[size_r-- - 1] = '1';
	else if (!remain && size_r)
		return (0);
	return (r + size_r);
}
