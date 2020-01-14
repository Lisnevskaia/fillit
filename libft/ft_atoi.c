/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:20:49 by ccred             #+#    #+#             */
/*   Updated: 2019/09/11 20:51:30 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_chaeck(unsigned long *res, int *sign, int num)
{
	if (num >= 20 && *sign == -1)
		*res = 0;
	if (num >= 20 && *sign == 1)
	{
		*res = 1;
		*sign = -1;
	}
}

int			ft_atoi(const char *nptr)
{
	unsigned long	result;
	int				neg;
	int				i;

	result = 0;
	neg = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (nptr[i] < 48 || nptr[i] > 57)
			return (result * neg);
		else
			result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	ft_chaeck(&result, &neg, i);
	return (result * neg);
}
