/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 20:48:41 by ccred             #+#    #+#             */
/*   Updated: 2019/09/07 21:36:54 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*test1;
	unsigned char	*test2;
	size_t			i;

	i = 0;
	test1 = (unsigned char*)s1;
	test2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (test1[i] != test2[i])
			return (test1[i] - test2[i]);
		i++;
	}
	return (0);
}
