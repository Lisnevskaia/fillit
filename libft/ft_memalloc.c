/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:17:13 by ccred             #+#    #+#             */
/*   Updated: 2019/09/09 20:20:51 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;

	str = NULL;
	if (size)
	{
		str = (unsigned char*)malloc(size);
		if (!str)
			return (NULL);
		while (size)
		{
			size--;
			str[size] = 0;
		}
	}
	return ((void*)str);
}
