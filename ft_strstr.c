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

static int	check_same(char *haystack, const char *needle)
{
	int i;
	int ans;

	i = -1;
	ans = 0;
	while (needle[++i])
		if (haystack[i] == needle[i])
			ans++;
	return (i == ans);
}

char 		*ft_strstr(const char *haystack, const char *needle)
{
	int i;

	i = -1;
	while (haystack[++i])
		if (haystack[i] == needle[0])
			if (check_same((char *)&haystack[i], needle))
				return ((char *)&haystack[i]);
	return (needle[0] ? NULL : (char *)haystack);
}