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

static int check_same(char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int ans;

	i = -1;
	ans = 0;
	while (needle[++i])
	{
		if (haystack[i] == needle[i])
			ans++;
	}
	return i == ans;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	char *res;

	i = -1;
	res = (char *)malloc((ft_strlen(haystack) + 1) * sizeof(res));
	res = ft_strcpy(res, haystack);
	while (++i < len)
	{
		if (res[i] == needle[0])
			if (check_same(&res[i], needle))
			{
				return &res[i];
			}
	}
	return needle[0] ? NULL : res;
}