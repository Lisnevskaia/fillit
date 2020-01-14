/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:03:49 by ccred             #+#    #+#             */
/*   Updated: 2019/11/13 19:20:06 by bryam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	full_of_point(char *new, int m_s_sq)
{
	int i;

	i = 0;
	while (i < m_s_sq)
		new[i++] = '.';
	new[i] = '\0';
}

char	*ft_copy(char *new, char *old, int m_s_sq)
{
	int i;

	i = 0;
	while (i < m_s_sq && old[i])
	{
		new[i] = old[i];
		i++;
	}
	return (new);
}

void	clear_old_figure(t_figure *start)
{
	int i;

	i = 0;
	while (i < start->size)
	{
		ft_strdel(&(start->figure[i]));
		i++;
	}
	free(start->figure);
}

void	change_s_f(t_figure *start, int m_s_sq)
{
	char	**new;
	int		i;

	i = 0;
	if (!(new = (char**)malloc(sizeof(char*) * m_s_sq)))
		ft_error(1);
	while (i < m_s_sq)
	{
		new[i] = ft_strnew(m_s_sq);
		i++;
	}
	i = 0;
	while (i < m_s_sq && i < start->size)
	{
		full_of_point(new[i], m_s_sq);
		ft_copy(new[i], start->figure[i], m_s_sq);
		i++;
	}
	while (i < m_s_sq)
		full_of_point(new[i++], m_s_sq);
	clear_old_figure(start);
	start->size = m_s_sq;
	start->figure = new;
}

int		check_real_s(t_figure *start)
{
	int i;
	int j;

	while (start)
	{
		i = 2;
		j = 0;
		while (j < 3)
		{
			if (start->figure[i][j] != '.')
				return (3);
			j++;
		}
		i = 0;
		j = 2;
		while (i < 3)
		{
			if (start->figure[i][j] != '.')
				return (3);
			i++;
		}
		start = start->next;
	}
	return (2);
}
