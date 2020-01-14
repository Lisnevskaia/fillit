/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:46:08 by ccred             #+#    #+#             */
/*   Updated: 2019/09/12 10:14:19 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bi, const char *le, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (!le[0])
		return ((char*)&bi[b]);
	while (bi[b] != '\0' && (b < len))
	{
		l = 0;
		while ((bi[b + l]) == le[l] && le[l] && (l + b) < len)
			l++;
		if (le[l] == '\0')
			return ((char*)&bi[b]);
		b++;
	}
	return (NULL);
}
