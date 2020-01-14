/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 19:20:49 by ccred             #+#    #+#             */
/*   Updated: 2019/09/11 18:48:15 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		l;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s) - 1;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (l > i && (s[l] == ' ' || s[l] == '\n' || s[l] == '\t'))
		l--;
	res = (char*)malloc(l - i + 2);
	if (res)
	{
		ft_strncpy(res, &s[i], (l - i + 1));
		res[l - i + 1] = '\0';
		return (res);
	}
	return (NULL);
}
