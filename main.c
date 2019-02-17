#include "libft.h"
#include <stdio.h>

int main()
{
	char a[100] = "abcd";
	char b[100] = "efgh";

	printf("ft_memcpy : %s\n",ft_memcpy(a, b, 2));
	printf("ft_strncpy : %s\n",ft_strncpy(a, b, 2));
	printf("ft_memccpy : %s\n",ft_memccpy(a, b, 64 ,2));
	return (0);
}
