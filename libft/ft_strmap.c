/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:05:44 by ccred             #+#    #+#             */
/*   Updated: 2019/09/12 10:04:33 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*s1;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	s1 = (char*)malloc(len + 1);
	if (s1)
	{
		while (s[i] != '\0')
		{
			s1[i] = (*f)(s[i]);
			i++;
		}
		s1[i] = '\0';
		return (s1);
	}
	return (NULL);
}
