/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:03:18 by ccred             #+#    #+#             */
/*   Updated: 2019/09/11 17:57:01 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	s1 = (unsigned char*)dest;
	s2 = (unsigned char*)src;
	if (s1 > s2)
	{
		while (n-- > 0)
			s1[n] = s2[n];
	}
	else
	{
		while (++i < n)
			s1[i] = s2[i];
	}
	return (s1);
}
