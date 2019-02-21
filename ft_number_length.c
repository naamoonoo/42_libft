#include "libft.h"

int	ft_number_length(int n)
{
	if (n < 10)
		return (1);
	else
		return (ft_number_length(n % 10) + ft_number_length(n / 10));
}
