/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccred <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:09:00 by ccred             #+#    #+#             */
/*   Updated: 2019/11/20 16:23:32 by bryam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	t_figure	*head;
	int			fd;
	int			i;

	i = 0;
	if (argc != 2)
		ft_error(2);
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		ft_error(1);
	head = read_figure(fd);
	close(fd);
	valid(head);
	refresh(head, min_size(head));
	make_letters_from_sym(head);
	back_traking(head);
	join(head);
	while (i < head->size)
	{
		ft_putstr(head->figure[i++]);
		ft_putchar('\n');
	}
	clear_all(head);
	return (0);
}
