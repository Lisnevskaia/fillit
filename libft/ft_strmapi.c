/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:27:23 by ccred             #+#    #+#             */
/*   Updated: 2019/09/08 21:03:48 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*test;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	test = (char *)malloc(ft_strlen(s) + 1);
	if (test)
	{
		while (s[i] != '\0')
		{
			test[i] = f(i, s[i]);
			i++;
		}
		test[i] = '\0';
		return (test);
	}
	else
		return (NULL);
}
