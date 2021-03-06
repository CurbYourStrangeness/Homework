#include "Hmwrk1-1.h"

int factor_power(unsigned int n, unsigned int d)
{
	int q = 1;
	int result = pow(d, q);
	while ((n % result) == 0)
	{
		++q;
		result = pow(d, q);
	}

	if (n % result != 0)
	{
	  --q;
	}
	return q;
}
