/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 20:06:58 by susharma          #+#    #+#             */
/*   Updated: 2018/05/03 22:17:33 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		if (content == NULL)
		{
			new->content_size = 0;
			new->content = NULL;
		}
		else
		{
			new->content_size = content_size;
			if (!(new->content = ft_memalloc(new->content_size)))
				return (NULL);
			new->content = ft_memcpy(new->content, content, new->content_size);
		}
		new->next = NULL;
	}
	return (new);
}
