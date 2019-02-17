/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 23:58:07 by hnam              #+#    #+#             */
/*   Updated: 2019/02/13 23:58:08 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t l_idx;
	char *ans;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			l_idx = i;
	ans = (char *)malloc((i - l_idx + 1) * sizeof(ans));
	i = -1;
	while (++i < ft_strlen(s) - l_idx)
		ans[i] = s[l_idx + i];
	ans[i] = '\0';
	return ans;
}