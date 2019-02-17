/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 23:54:02 by hnam              #+#    #+#             */
/*   Updated: 2019/02/13 23:54:05 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_space_remover(char *str)
{
	if (str[0] == '\t' || str[0] == ' ' || str[0] == '+')
		return ft_space_remover(&str[1]);
	else
		return str;
}

int ft_atoi(const char *str)
{
	int i;
	int mult;
	int ans;
	char *temp;

	i = 0;
	mult = 1;
	ans = 0;
	temp = (char *)malloc(ft_strlen(str) * sizeof(temp));
	if (!(temp = ft_space_remover(ft_strcpy(temp, str))))
		return 0;
	if (temp[i] == '-')
		i++;
	while (temp[i] >= '0' && temp[i] <= '9')
		i++;
	while (--i >= 0)
	{
		if (temp[i] >= '0' && temp[i] <= '9')
		{
			ans += (temp[i] - 48) * mult;
			mult *= 10;
		}
	}
	return temp[++i] == '-' ? ans * -1 : ans;
}