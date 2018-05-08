/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 19:51:34 by susharma          #+#    #+#             */
/*   Updated: 2018/05/07 20:51:40 by susharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int i;
	int	sign;
	int	ans;

	i = 0;
	sign = 1;
	ans = 0;
	while (c[i] == ' ' || c[i] == '\n' || c[i] == '\r' || c[i] == '\f' ||
				c[i] == '\t' || c[i] == '\v')
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(c[i]))
	{
		ans = (ans * 10) + (c[i] - '0');
		i++;
	}
	return (ans * sign);
}
