/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:59:10 by ccred             #+#    #+#             */
/*   Updated: 2019/09/09 22:31:29 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	size_t			i;
	unsigned char	*test;

	i = 0;
	test = (unsigned char*)memptr;
	while (i < num)
	{
		test[i] = (unsigned char)val;
		i++;
	}
	return (memptr);
}
