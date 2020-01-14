/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 21:58:31 by ccred             #+#    #+#             */
/*   Updated: 2019/09/09 22:00:57 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*result;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	result = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	while (s1[++i] != '\0')
		result[i] = s1[i];
	k = -1;
	while (s2[++k] != '\0')
	{
		result[i] = s2[k];
		i++;
	}
	result[i] = '\0';
	return (result);
}
