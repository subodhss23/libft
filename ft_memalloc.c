/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 19:54:45 by susharma          #+#    #+#             */
/*   Updated: 2018/05/03 22:18:47 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *tmp;

	tmp = (void*)malloc(sizeof(void) * size);
	if (!tmp || size == 0)
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
