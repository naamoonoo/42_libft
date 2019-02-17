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

static int check_same(char *haystack, const char *needle)
{
	int i;
	int ans;

	i = 0;
	ans = 0;
	while (needle[i])
	{
		if (haystack[i] == needle[i])
			ans++;
		i++;
	}
	return i == ans;
}

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	char *res;

	i = -1;
	res = (char *)malloc((ft_strlen(haystack) + 1) * sizeof(res));
	res = ft_strcpy(res, haystack);
	while (res[++i])
	{
		if (res[i] == needle[0])
			if (check_same(&res[i], needle))
			{
				return &res[i];
			}
	}
	return needle[0] ? NULL : res;
}