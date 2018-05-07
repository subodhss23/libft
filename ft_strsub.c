/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 19:58:39 by susharma          #+#    #+#             */
/*   Updated: 2018/05/03 23:05:22 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	return (new);
}
