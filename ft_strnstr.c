/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:27:25 by hnam              #+#    #+#             */
/*   Updated: 2019/02/14 08:27:26 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = -1;
	if (!haystack[0])
		return (NULL);
	while (haystack[++i] && i + ft_strlen(needle) <= len)
		if (haystack[i] == needle[0])
			if (ft_strncmp((char *)&haystack[i], needle, ft_strlen(needle)) == 0)
				return ((char *)&haystack[i]);
	return (needle[0] != '\0' ? NULL : (char *)haystack);
}
