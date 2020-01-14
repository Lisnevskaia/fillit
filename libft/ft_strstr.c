/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:35:20 by ccred             #+#    #+#             */
/*   Updated: 2019/09/12 10:14:24 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (!needle[0])
		return ((char*)&haystack[h]);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && needle[n] != '\0')
			n++;
		if (needle[n] == '\0')
			return ((char*)&haystack[h]);
		h++;
	}
	return (NULL);
}
