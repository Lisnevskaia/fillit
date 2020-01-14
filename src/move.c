/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:01:52 by ccred             #+#    #+#             */
/*   Updated: 2019/11/13 19:13:04 by bryam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	move_up(char **figure, int size)
{
	int i;
	int j;
	int key;
	int top;

	i = 0;
	top = 0;
	while (i < size)
	{
		key = 0;
		j = 0;
		while (j < size)
		{
			if (figure[i][j] != '.')
			{
				key++;
				ft_swap(&figure[i][j], &figure[top][j]);
			}
			j++;
		}
		if (key)
			top++;
		i++;
	}
}

void	move_left(char **figure, int size)
{
	int i;
	int j;
	int top;
	int key;

	i = 0;
	top = 0;
	while (i < size)
	{
		key = 0;
		j = 0;
		while (j < size)
		{
			if (figure[j][i] != '.')
			{
				ft_swap(&figure[j][i], &figure[j][top]);
				key++;
			}
			j++;
		}
		if (key)
			top++;
		i++;
	}
}

void	move_up_left(t_figure *start)
{
	while (start)
	{
		move_up(start->figure, start->size);
		move_left(start->figure, start->size);
		start = start->next;
	}
}

int		check_real_size(t_figure *start)
{
	int i;
	int j;

	while (start)
	{
		i = 3;
		j = 0;
		while (j < 4)
		{
			if (start->figure[i][j] != '.')
				return (4);
			j++;
		}
		i = 0;
		j = 3;
		while (i < 4)
		{
			if (start->figure[i][j] != '.')
				return (4);
			i++;
		}
		start = start->next;
	}
	return (3);
}
