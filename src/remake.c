/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remake.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:05:09 by ccred             #+#    #+#             */
/*   Updated: 2019/11/13 19:23:47 by bryam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	refresh(t_figure *start, int m_s_sq)
{
	move_up_left(start);
	if (m_s_sq == 3)
		m_s_sq = check_real_size(start);
	if (m_s_sq == 3)
		m_s_sq = check_real_s(start);
	while (start)
	{
		change_s_f(start, m_s_sq);
		start = start->next;
	}
}

void	make_letters_from_sym(t_figure *start)
{
	int i;
	int j;

	while (start)
	{
		i = 0;
		while (i < start->size)
		{
			j = 0;
			while (j < start->size)
			{
				if (start->figure[i][j] == '#')
					start->figure[i][j] = start->num + 'A';
				j++;
			}
			i++;
		}
		start = start->next;
	}
}

int		is_get_in_the_way(t_figure *head, t_figure *tmp)
{
	int	i;
	int	j;

	while (head->num < tmp->num)
	{
		i = 0;
		while (i < head->size)
		{
			j = 0;
			while (j < head->size)
			{
				if (head->figure[i][j] != '.' && tmp->figure[i][j] != '.')
					return (1);
				j++;
			}
			i++;
		}
		head = head->next;
	}
	return (0);
}

int		have_no_down(char **figure, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (figure[size - 1][i] != '.')
			return (1);
		i++;
	}
	return (0);
}

int		have_no_right(char **figure, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (figure[i][size - 1] != '.')
			return (1);
		i++;
	}
	return (0);
}
