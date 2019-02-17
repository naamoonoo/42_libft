#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*res;

	if (!(res = (char *)malloc(size * sizeof(res))))
		return (NULL);
	ft_memset(res, 0, size);
	return (res);
}