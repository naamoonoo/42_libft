/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:42:32 by hnam              #+#    #+#             */
/*   Updated: 2019/02/15 19:42:33 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int get_length(int n)
{
	int	nbr;
	int	len;
	int	is_negative;

	is_negative = n < 0 ? 1 : 0;
	nbr = is_negative == 1 ? n * -1 : n;
	len = is_negative == 1 ? 1 : 0;
	while (nbr / 10 != 0)
	{
		len++;
		nbr /= 10;
	}
	return (++len);
}

static	int get_pow(int len)
{
	int i;
	int res;

	i = -1;
	res = 1;
	while (++i < len)
		res *= 10;
	return (res / 10);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	int		divider;
	char	*res;

	i = -1;
	len = get_length(n);
	divider = get_pow(n < 0 ? len - 1 : len);
	if(!(res = ft_strnew(len)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(res, "-2147483648"));
	if (n < 0)
	{
		n *= -1;
		res[++i] = '-';
	}
	while (++i < len)
	{
		res[i] =  n / divider + '0';
		n -= (n / divider) * divider;
		divider /= 10;
	}
	res[i] = '\0';
	return (res);
}