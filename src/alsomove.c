/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alsomove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:06:27 by ccred             #+#    #+#             */
/*   Updated: 2019/11/13 19:01:48 by bryam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		move_down(char **figure, int size)
{
	int i;
	int j;

	i = size - 1;
	j = i;
	if (!(have_no_down(figure, size)))
	{
		while (i > 0 || j > 0)
		{
			if (figure[i][j] != '.' && i != size - 1)
				ft_swap(&figure[i][j], &figure[i + 1][j]);
			if (j == 0)
			{
				i--;
				j = size - 1;
			}
			else
				j--;
		}
		ft_swap(&figure[i][j], &figure[i + 1][j]);
	}
}

void		move_right(char **figure, int size)
{
	int i;
	int j;

	i = size - 1;
	j = size - 1;
	if (have_no_right(figure, size) != 1)
	{
		while (i > 0 || j > 0)
		{
			if (figure[i][j] != '.' && j != size - 1)
				ft_swap(&figure[i][j], &figure[i][j + 1]);
			if (j == 0)
			{
				i--;
				j = size - 1;
			}
			else
				j--;
		}
		ft_swap(&figure[i][j], &figure[i][j + 1]);
	}
}

int			move(t_figure *tmp)
{
	if (have_no_down(tmp->figure, tmp->size) &&
			have_no_right(tmp->figure, tmp->size))
		return (1);
	if (have_no_right(tmp->figure, tmp->size))
	{
		move_left(tmp->figure, tmp->size);
		move_down(tmp->figure, tmp->size);
	}
	else
		move_right(tmp->figure, tmp->size);
	return (0);
}

t_figure	*back(t_figure *head, int num)
{
	while (head->num < (num - 1))
		head = head->next;
	return (head);
}

void		back_traking(t_figure *start)
{
	t_figure	*tmp;

	tmp = start;
	while (tmp)
	{
		while (is_get_in_the_way(start, tmp))
			if (move(tmp))
			{
				while (move(tmp))
				{
					if (tmp == start)
					{
						refresh(start, start->size + 1);
						break ;
					}
					tmp = back(start, tmp->num);
				}
				move_up_left(tmp->next);
			}
		tmp = tmp->next;
	}
}
