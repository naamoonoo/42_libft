/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 23:57:53 by hnam              #+#    #+#             */
/*   Updated: 2019/02/13 23:57:54 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	while (len-- > 0)
	{
		if (src[len] != '\0')
			dst[len] = src[len];
		else
			dst[len] = '\0';
	}
	return dst;
}