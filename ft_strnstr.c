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

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	char *t;

	if (haystack[0] == 0)
		return (NULL);
	i = -1;
	if (haystack == needle && ft_strlen(needle) == len)
		return ((char *)haystack);
	t = (char *)haystack;
	while (t[++i] && i + ft_strlen(needle) < len)
		if (t[i] == needle[0] && ft_is_same((char *)&t[i], (char *)needle))
			return ((char *)&t[i]);
	return (needle[0] != '\0' ? NULL : (char *)t);
}
