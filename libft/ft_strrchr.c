/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:54:57 by ccred             #+#    #+#             */
/*   Updated: 2019/11/13 19:04:14 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				index;

	i = ft_strlen(s);
	index = 0;
	while (i >= index)
	{
		if (s[i - index++] == c)
			return ((char*)&s[i - (index - 1)]);
	}
	return (NULL);
}
