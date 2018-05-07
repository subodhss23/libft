/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 19:59:40 by susharma          #+#    #+#             */
/*   Updated: 2018/05/03 23:06:18 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*new;

	i = 0;
	while (s[i] <= ' ' && s[i] != '\0')
		i++;
	start = i;
	while (s[i] != '\0')
		i++;
	while (s[i] <= ' ' && i > start)
		i--;
	end = i;
	new = ft_strnew(end - start + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (start++ <= end)
	{
		new[i] = s[start - 1];
		i++;
	}
	new[i] = '\0';
	return (new);
}
