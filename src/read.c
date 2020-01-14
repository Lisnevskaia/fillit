/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:54:45 by ccred             #+#    #+#             */
/*   Updated: 2019/11/23 14:53:10 by ccred            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_figure	*new(int size)
{
	t_figure	*new;
	int			i;

	i = 0;
	if (!(new = (t_figure*)malloc(sizeof(t_figure))))
		return (NULL);
	new->size = size;
	new->next = NULL;
	new->figure = (char**)malloc(sizeof(char*) * (size));
	while (i < size)
	{
		new->figure[i] = ft_strnew(size);
		i++;
	}
	return (new);
}

void		check(t_figure *tmp, char **line, int num, int key)
{
	int	len;

	len = ft_strlen(*line);
	if (len != key)
		ft_error(1);
	if (key == 0)
	{
		if (num > 24)
			ft_error(1);
		tmp->num = num;
		tmp->size = 4;
		tmp->next = new(4);
	}
	ft_strdel(line);
}

t_figure	*read_figure(int fd)
{
	t_figure	*start;
	t_figure	*tmp;
	char		*line;
	int			i;
	int			num;

	num = 0;
	i = 0;
	start = new(4);
	tmp = start;
	while (get_next_line(fd, &line))
	{
		if (i == 4)
		{
			check(tmp, &line, num++, 0);
			i = 0;
			tmp = tmp->next;
			continue ;
		}
		ft_strcpy(tmp->figure[i++], line);
		check(tmp, &line, num, 4);
	}
	free(line);
	tmp->num = num;
	return (start);
}
