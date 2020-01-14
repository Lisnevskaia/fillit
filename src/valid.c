/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:58:00 by ccred             #+#    #+#             */
/*   Updated: 2019/11/13 19:20:38 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		cheak_communication(char **figure, int i, int j, int *cnt)
{
	int	communication;

	communication = 0;
	(*cnt)++;
	if ((i + 1) < 4)
	{
		if (figure[i + 1][j] == '#')
			communication++;
	}
	if ((j + 1) < 4)
	{
		if (figure[i][j + 1] == '#')
			communication++;
	}
	if ((i - 1) >= 0)
	{
		if (figure[i - 1][j] == '#')
			communication++;
	}
	if ((j - 1) >= 0)
	{
		if (figure[i][j - 1] == '#')
			communication++;
	}
	return (communication);
}

void	number_of_char(char **figure)
{
	int i;
	int j;
	int count;
	int com;

	i = 0;
	count = 0;
	com = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (figure[i][j] == '#')
				com = com + cheak_communication(figure, i, j, &count);
			if (figure[i][j] != '#' && figure[i][j] != '.')
				ft_error(1);
			j++;
		}
		i++;
	}
	if (count != 4 || (com != 6 && com != 8))
		ft_error(1);
}

void	valid(t_figure *head)
{
	while (head)
	{
		number_of_char(head->figure);
		head = head->next;
	}
}

int		min_size(t_figure *start)
{
	int count;
	int m_s;

	count = 0;
	m_s = 3;
	while (start)
	{
		start = start->next;
		count++;
	}
	count = count * 4;
	while (m_s * m_s < count)
		m_s++;
	return (m_s);
}
