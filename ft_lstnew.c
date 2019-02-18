/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 10:27:24 by hnam              #+#    #+#             */
/*   Updated: 2019/02/17 10:40:45 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;
	
	if (!(res = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(res->content = (void *)malloc(sizeof(res->content_size))))
		return (NULL);
	res->content = content
	 ? ft_memcpy(res->content, content, content_size)
	 : NULL;
	res->content_size = content_size ? content_size : 0;
	res->next = NULL;
	return (res);
}
//norm check!

















// t_list	*ft_lstnew(void const *content, size_t content_size)
// {
// 	t_list	*res;

// 	if (!(res = (t_list*)malloc(sizeof(t_list))))
// 			return (NULL);
// 	if (content && content_size)
// 	{
// 		res->content = ft_memalloc(sizeof(content_size));
// 		res->content = ft_memcpy(res->content, content, content_size);
// 		res->content_size = content_size;
// 	}
// 	else
// 	{
// 		res->content = NULL;
// 		res->content_size = 0;
// 	}
// 	res->next = NULL;
// 	return (res);
// }
