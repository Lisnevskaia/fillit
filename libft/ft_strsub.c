/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 21:16:45 by ccred             #+#    #+#             */
/*   Updated: 2019/09/13 17:00:12 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*cpp;

	i = 0;
	if (!str)
		return (NULL);
	cpp = (char*)malloc(len + 1);
	if (!cpp)
		return (NULL);
	while (i < len)
	{
		cpp[i] = str[i + start];
		i++;
	}
	cpp[i] = '\0';
	return (cpp);
}
