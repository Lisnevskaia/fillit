/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 21:05:34 by ccred             #+#    #+#             */
/*   Updated: 2019/09/09 17:51:51 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s12;

	s11 = (unsigned char*)s1;
	s12 = (unsigned char*)s2;
	i = 0;
	while (i < n && s11[i] != '\0' && s12[i] != '\0')
	{
		if (s11[i] != s12[i])
			return (s11[i] - s12[i]);
		i++;
	}
	if (s11[i] != s12[i] && i != n)
		return (s11[i] - s12[i]);
	return (0);
}
