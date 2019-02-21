#include "libft.h"

int	ft_start_idx(char const *s)
{
	int	i;
	
	i = 0;
	while(ft_is_space(s[i]))
		i++;
	return (i);
}