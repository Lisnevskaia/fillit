/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 19:48:26 by ccred             #+#    #+#             */
/*   Updated: 2019/09/08 19:59:45 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*test;
	size_t			i;
	unsigned char	c1;

	i = 0;
	test = (unsigned char*)s;
	c1 = (unsigned char)c;
	while (i < n)
	{
		if (test[i] == c1)
			return (test + i);
		i++;
	}
	return (NULL);
}
