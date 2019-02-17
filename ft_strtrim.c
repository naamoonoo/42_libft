/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:42:19 by hnam              #+#    #+#             */
/*   Updated: 2019/02/15 19:42:19 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start_idx(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		else
			break;
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		i;
	char	*res;

	if (s)
	{
		start = get_start_idx(s);
		i = ft_strlen(s) - 1;
		while (s[i])
		{
			if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
				i--;
			else
				break;
		}
		if (i < 0)
			return "";
		end = i;
		if (!(res = ft_strnew(end - start + 2)))
			return (NULL);
		res = ft_strsub(s, start, end - start + 1);
		return (res);
	}
	return (NULL);
}