/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 23:55:47 by hnam              #+#    #+#             */
/*   Usdated: 2019/02/13 23:56:00 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	int len;

	i = -1;
	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[len]);
	while (s[++i])
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (NULL);
}
