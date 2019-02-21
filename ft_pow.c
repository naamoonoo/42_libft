#include "libft.h"

int ft_pow(int times)
{
	int res;
	
	res = 1;
	while(--times != 0)
		res *= 10;
	return (res);
}