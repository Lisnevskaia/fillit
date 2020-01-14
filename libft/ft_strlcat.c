/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:11:24 by ccred             #+#    #+#             */
/*   Updated: 2019/09/10 21:13:58 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[j] && j < n)
		j++;
	i = j;
	while (src[j - i] && j + 1 < n)
	{
		dest[j] = src[j - i];
		j++;
	}
	if (i < n)
		dest[j] = '\0';
	return (i + ft_strlen(src));
}
