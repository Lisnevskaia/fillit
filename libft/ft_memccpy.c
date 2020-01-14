/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:44:36 by ccred             #+#    #+#             */
/*   Updated: 2019/09/09 18:04:45 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*test;
	unsigned char	*test2;
	size_t			i;

	i = 0;
	test = (unsigned char*)dest;
	test2 = (unsigned char*)src;
	while (i < n)
	{
		test[i] = test2[i];
		if (test[i] == (unsigned char)c)
			return (&test[i + 1]);
		i++;
	}
	return (NULL);
}
