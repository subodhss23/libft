/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 19:45:44 by susharma          #+#    #+#             */
/*   Updated: 2018/05/03 22:19:43 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	count;
	char	*d;
	char	*s;

	d = (char*)dst;
	s = (char*)src;
	count = 0;
	while (count < n)
	{
		d[count] = s[count];
		if (d[count] == c)
			return ((void*)&d[count + 1]);
		count++;
	}
	return (NULL);
}
