/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joinandclean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:07:54 by ccred             #+#    #+#             */
/*   Updated: 2019/11/13 19:09:09 by bryam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	join(t_figure *start)
{
	t_figure	*tmp;
	int			i;
	int			j;

	tmp = start;
	while (tmp)
	{
		i = 0;
		while (i < start->size)
		{
			j = 0;
			while (j < start->size)
			{
				if (tmp->figure[i][j] != '.')
					start->figure[i][j] = tmp->figure[i][j];
				j++;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void	clear_all(t_figure *head)
{
	t_figure	*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		clear_old_figure(tmp);
		free(tmp);
	}
}
