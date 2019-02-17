/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:10:56 by hnam              #+#    #+#             */
/*   Updated: 2019/02/14 10:10:57 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*temp;
	char		*d;
	const char	*s;

	d = (char *)dst;
	s = (const char *)src;
	temp = (char *)malloc(len * sizeof(temp));
	i = -1;
	while (++i < len)
		temp[i] = s[i];
	i = -1;
	while (++i < len)
		d[i] = temp[i];
	return (dst);
}