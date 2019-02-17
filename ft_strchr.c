/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 23:55:47 by hnam              #+#    #+#             */
/*   Updated: 2019/02/13 23:56:00 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	int is_found;
	int j;
	char *ans;

	i = -1;
	is_found = 0;
	j = 0;
	ans = (char *)malloc((ft_strlen(s) + 1) * sizeof(ans));
	while (s[++i])
	{
		if (s[i] == c)
			is_found = 1;
		if (is_found == 0)
			continue;
		else
			ans[j++] = s[i];
	}
	ans[j] = '\0';
	return ans;
}