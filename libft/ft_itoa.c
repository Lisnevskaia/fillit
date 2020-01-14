/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 22:06:46 by ccred             #+#    #+#             */
/*   Updated: 2019/09/09 22:28:02 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	char	*test;
	size_t	size;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_lennum(n);
	test = (char*)malloc(size + 1);
	if (!test)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		test[0] = '-';
		i++;
	}
	test[size] = '\0';
	while (i < size--)
	{
		test[size] = (n % 10) + '0';
		n = n / 10;
	}
	return (test);
}
