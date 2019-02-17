/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 23:58:18 by hnam              #+#    #+#             */
/*   Updated: 2019/02/13 23:58:24 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = -1;
	while (haystack[++i])
		if (haystack[i] == needle[0])
			if (ft_is_same((char *)&haystack[i], needle))
				return ((char *)&haystack[i]);
	return (needle[0] ? NULL : (char *)haystack);
}
