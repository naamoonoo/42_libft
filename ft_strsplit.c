/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:42:27 by hnam              #+#    #+#             */
/*   Updated: 2019/02/15 19:42:28 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char **make_array(char const *s, char c)
{
	unsigned int		i;
	int		len;
	char	**res;

	i = -1;
	len = s[0] == c ? 0 : 1;
	while(s[++i] && s[i + 1])
		if (s[i] == c && s[i + 1] != c)
			len++;
	// printf("len is %d\n", len);
	// then malloc len + 1 size array 
	// array[len] = "\0"
	if(!(res = (char **)malloc((len + 1) * sizeof(char *))))
		return (NULL);
	return res;
}

char **ft_strsplit(char const *s, char c)
{
	unsigned int		i;
	int		len;
	int		start;
	char	**res;

	if(s)
	{
		if(!(res = make_array(s, c)))
			return (NULL);
		// find (s[i] != c && s[i + 1] == c) then, strsub(s, start, i+1);
		// find (s[i] == c && s[i + 1] != c) then, set start as i+1;
		start = 0;
		i = -1;
		len = 0;
		while(s[++i] && s[i + 1])
		{
			if (s[i] == c && s[i + 1] != c)
				start = i + 1;
			if (s[i] != c && s[i + 1] == c)
				// res[len] = ft_strnew(i - start + 1);
				res[len++] = ft_strsub(s, start, i - start + 1);
				// printf("from %s\n", temp);
				// printf("len is %d, from %c to %c\n", i - start + 1, s[start], s[i]);
			if (i + 2 == ft_strlen(s) && s[i + 1] != c)
				res[len++] = ft_strsub(s, start, i - start + 2);
		}
		res[len] = ((void *)0);
		return (res);
	}
	return NULL;
}

// int main()
// {
// 	ft_strsplit("*abd**abc**adfa",'*');
// *******ollo => oll
// 	return (0);
// }





